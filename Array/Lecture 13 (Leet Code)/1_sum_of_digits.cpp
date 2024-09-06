// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.

// Leet Code 258 digit sum

#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    while (num > 9) {
        int ans = 0, rem;
        while (num != 0) {
            rem = num % 10;
            num = num / 10;
            ans = ans + rem;
        }
        num = ans; // Update num with the sum of its digits
    }
    return num; // Return the single-digit result
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = sumOfDigits(num);
    cout << "The sum of digits until a single digit is: " << result << endl;

    return 0;
}