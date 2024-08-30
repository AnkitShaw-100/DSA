#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

int maxSubArraySum(vector<int>& arr) {
    int n = arr.size();
    int maxi = INT_MIN;
    int prefix = 0;

    for (int i = 0; i < n; i++) {
        prefix += arr[i];
        maxi = max(maxi, prefix);
        if (prefix < 0) {
            prefix = 0;
        }
    }

    return maxi;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // Example array
    int maxSum = maxSubArraySum(arr);
    cout << "The maximum sum of a contiguous subarray is: " << maxSum << endl;
    return 0;
}