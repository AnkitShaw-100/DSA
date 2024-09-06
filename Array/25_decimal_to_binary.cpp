#include <iostream>
using namespace std;

int decimalToBinary(int num) {
    if (num == 0) return 0; // Handle the case when the input number is 0

    int ans = 0, mul = 1, rem;
    while (num > 0) {
        rem = num % 2;
        num = num / 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative integer." << endl; // Changed to clarify the message
        return 1;
    }

    int binary = decimalToBinary(num);
    cout << "The binary representation is: " << binary << endl;

    return 0;
}
