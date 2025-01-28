#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int>& data) {
    for (int i = 0; i < data.size() - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < data.size(); ++j) {
            if (data[j] < data[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(data[i], data[minIndex]);
        }
    }
}
void bubbleSort(vector<int>& data) {
    for (int i = 0; i < data.size() - 1; ++i) {
        for (int j = 0; j < data.size() - i - 1; ++j) {
            if (data[j] > data[j + 1]) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}
int main() {
    cout<< " Ebter The Size " <<endl;
    cout<<"enter the size : ";
    int size;cin>>size;
    vector<int> data(size);
    for(auto&i:data)
        cin>>i;
    cout << "Unsorted data: ";
    for (int item : data) {
        cout << item << " ";
    }
    cout << endl;

    selectionSort(data);
    bubbleSort(data);
    cout << "Sorted data: ";
    for (int item : data) {
        cout << item << " ";
    }
    cout <<endl;

    return 0;
}
