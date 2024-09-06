// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21

// Leet Code : 7 (Reverse Integer)
#include <iostream>
using namespace std;

int reverseNumber(int x) {
    int ans = 0, rem;
    while (x != 0) {
        rem = x % 10;
        x = x / 10;
        ans = ans * 10 + rem;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversedNum = reverseNumber(num);
    cout << "The reversed number is: " << reversedNum << endl;

    return 0;
}