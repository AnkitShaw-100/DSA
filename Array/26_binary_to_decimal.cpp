#include <iostream>
using namespace std;

int binaryToDecimal(int num) {
    int ans = 0, mul = 1, rem;
    while (num > 0) {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter a binary number: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int binary = binaryToDecimal(num);
    cout << "The decimal representation is: " << binary << endl;

    return 0;
}