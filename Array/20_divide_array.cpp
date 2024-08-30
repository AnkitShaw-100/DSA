#include <iostream>
#include <vector>
using namespace std;

bool canDivideEqualSum(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j <= i; j++) {
            sum1 += arr[j];
        }
        for (int j = i + 1; j < n; j++) {
            sum2 += arr[j];
        }
        if (sum1 == sum2) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 8, 5, 5};
    if (canDivideEqualSum(arr)) {
        cout << "The array can be divided into two subarrays with equal sum." << endl;
    } else {
        cout << "The array cannot be divided into two subarrays with equal sum." << endl;
    }
    return 0;
}