#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

long long maxRectangleWithOneModification(vector<int>& heights, int x) {
    int n = heights.size();
    vector<int> left(n), right(n);
    stack<int> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && heights[s.top()] >= heights[i]) s.pop();
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }

    while (!s.empty()) s.pop();
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && heights[s.top()] >= heights[i]) s.pop();
        right[i] = s.empty() ? n : s.top();
        s.push(i);
    }

    long long maxArea = 0;
    for (int i = 0; i < n; i++) {
        long long width = right[i] - left[i] - 1;
        maxArea = max(maxArea, width * (long long)heights[i]);
    }

    for (int i = 0; i < n; i++) {
        long long width = right[i] - left[i] - 1;
        maxArea = max(maxArea, width * (long long)x);
    }

    return maxArea;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) cin >> heights[i];
    cout << maxRectangleWithOneModification(heights, x) << endl;
    return 0;
}
