#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <unordered_map>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

struct Event {
    string event_id;
    string title;
    string acronym;
    string project_code;
    string three_digit_code;
    string record_type;
    vector<Event*> children;

    Event(string id, string t, string a, string pc, string tpc, string rt)
        : event_id(id), title(t), acronym(a), project_code(pc), three_digit_code(tpc), record_type(rt) {}
};

// Function to escape quotes in strings
void escapeQuotes(string &str) {
    size_t pos = 0;
    while ((pos = str.find("\"", pos)) != string::npos) {
        str.insert(pos, "\"");
        pos += 2;
    }
}

// Function to trim whitespace from both ends of a string
string trim(const string &str) {
    size_t first = str.find_first_not_of(" \n\r\t");
    if (first == string::npos) return "";
    size_t last = str.find_last_not_of(" \n\r\t");
    return str.substr(first, (last - first + 1));
}

int main() {
    string line;
    unordered_map<string, Event*> parent_events;
    unordered_multimap<string, Event*> child_events;

    // Read lines from standard input
    while (getline(cin, line)) {
        stringstream ss(line);
        string event_id, title, acronym, project_code, three_digit_code, record_type;

        getline(ss, event_id, ',');
        getline(ss, title, ',');
        getline(ss, acronym, ',');
        getline(ss, project_code, ',');
        getline(ss, three_digit_code, ',');
        getline(ss, record_type);

        // Trim quotes and whitespace from title and escape quotes
        title = trim(title);
        escapeQuotes(title);

        // Debugging: Print parsed data
        cout << "Parsed: " << event_id << ", " << title << ", " << acronym << ", " 
             << project_code << ", " << three_digit_code << ", " << record_type << endl;

        Event* event = new Event(event_id, title, acronym, project_code, three_digit_code, record_type);

        // Classify events into parent and child events
        if (record_type == "Parent Event") {
            if (project_code.empty() && three_digit_code.empty()) {
                parent_events[event_id] = event;
            }
        } else if (record_type == "IEEE Event") {
            if (!acronym.empty()) {
                child_events.emplace(acronym, event);
            }
        }
    }

    map<string, vector<Event*>> result;
    for (const auto& parent_pair : parent_events) {
        Event* parent = parent_pair.second;

        // Find corresponding children events
        auto range = child_events.equal_range(parent->acronym);
        vector<Event*> children(range.first, range.second);

        // Debugging: Show found children
        cout << "Parent: " << parent->event_id << ", Children Count: " << children.size() << endl;

        if (!children.empty()) {
            set<string> unique_codes;
            for (const auto& child : children) {
                if (!child->three_digit_code.empty()) {
                    unique_codes.insert(child->three_digit_code);
                }
            }

            // Determine the parent's three-digit code
            if (unique_codes.size() == 1) {
                parent->three_digit_code = *unique_codes.begin();
            } else {
                parent->three_digit_code = "???";
            }

            result[parent->acronym].push_back(parent);

            for (auto& child : children) {
                child->project_code = parent->project_code;
                child->three_digit_code = parent->three_digit_code;
                parent->children.push_back(child);
                result[parent->acronym].push_back(child);
            }
        }
    }

    // Output the organized events
    for (const auto& acronym_pair : result) {
        const auto& events = acronym_pair.second;

        // Sort children and parent by title and event_id
        if (events.size() > 1) {
            stable_sort(events.begin() + 1, events.end(), [](const Event* a, const Event* b) {
                return a->title < b->title || (a->title == b->title && a->event_id < b->event_id);
            });
        }

        const Event* parent = events[0];
        cout << parent->event_id << ",\"" << parent->title << "\",\"" << parent->acronym << "\",,"
             << parent->three_digit_code << ",\"Parent Event\"" << endl;

        for (size_t i = 1; i < events.size(); ++i) {
            const Event* child = events[i];
            cout << child->event_id << ",\"" << child->title << "\",\"" << child->acronym << "\","
                 << child->project_code << "," << child->three_digit_code << ",\"IEEE Event\",\""
                 << parent->event_id << "\"" << endl;
        }
    }

    // Clean up memory
    for (const auto& parent_pair : parent_events) {
        delete parent_pair.second;
    }
    for (const auto& child_pair : child_events) {
        delete child_pair.second;
    }

    return 0;
}
