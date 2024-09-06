// Example 1:

// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: n = 3
// Output: false

// Leet code : 231 (Power of two)
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n < 1)
        return false;
    while (n != 1) {
        if (n % 2 == 1)
            return false;
        n = n / 2;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo(num)) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is not a power of 2." << endl;
    }

    return 0;
}