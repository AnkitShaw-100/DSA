#include <iostream>
#include <vector>
using namespace std;

void segregate0and1(vector<int>& arr) {
    int n = arr.size();
    int start = 0, end = n - 1;

    while (start < end) {
        if (arr[start] == 0) {
            start++;
        } else {
            if (arr[end] == 0) {
                swap(arr[start], arr[end]);
                start++;
                end--;
            } else {
                end--;
            }
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 1, 0, 1, 0, 1}; // Example array
    segregate0and1(arr);

    // Print the rearranged array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}