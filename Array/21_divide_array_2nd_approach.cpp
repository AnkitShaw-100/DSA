#include <iostream>
#include <vector>
using namespace std;

bool canDivideEqualSum(vector<int>& arr) {
    int n = arr.size();
    int total_sum = 0;

    // Calculate the total sum of the array
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }

    int prefix = 0;
    int half_sum = total_sum / 2;

    // Iterate through the array and check if we can find a subarray with sum equal to half_sum
    for (int i = 0; i < n - 1; i++) {
        prefix += arr[i];
        if (prefix == half_sum) {
            return true;
        }
    }

    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 5};
    if (canDivideEqualSum(arr)) {
        cout << "The array can be divided into two subarrays with equal sum." << endl;
    } else {
        cout << "The array cannot be divided into two subarrays with equal sum." << endl;
    }
    return 0;
}