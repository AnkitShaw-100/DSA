// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:

// Input: x = 10
// Output: false
// Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

//Leet code : 9 (Palindrone number)

#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    int num = x, rem, ans = 0;

    while (num != 0) {
        rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
    }

    return ans == x;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}