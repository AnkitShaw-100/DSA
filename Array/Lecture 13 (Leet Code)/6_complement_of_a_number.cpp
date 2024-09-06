// Example 1:

// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
// Example 2:

// Input: n = 7
// Output: 0
// Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
// Example 3:

// Input: n = 10
// Output: 5
// Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.

//Leet code : 1009 (Complement of base 10 integer)
#include <iostream>
using namespace std;

int bitwiseNot(int n) {
    int ans = 0, rem, mul = 1;
    while (n) {
        rem = n % 2;
        rem = rem ^ 1; // Perform bitwise NOT on the current bit
        ans = ans + rem * mul;
        mul = mul * 2;
        n = n / 2;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = bitwiseNot(num);
    cout << "The bitwise NOT of " << num << " is: " << result << endl;

    return 0;
}
