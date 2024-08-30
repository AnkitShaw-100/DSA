#include <iostream>
#include <vector>
using namespace std;

void segregate0and1(vector<int>& arr) {
    int n = arr.size();
    int count0 = 0;
    int count1 = 0;

    // Count the number of 0s and 1s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
        } else {
            count1++;
        }
    }

    // Set the first count0 elements to 0
    for (int i = 0; i < count0; i++) {
        arr[i] = 0;
    }

    // Set the remaining elements to 1
    for (int i = count0; i < n; i++) {
        arr[i] = 1;
    }
}

int main() {
    vector<int> arr = {0, 1, 1, 1, 0, 1, 0, 1}; // Example array
    segregate0and1(arr);

    // Print the rearranged array
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}