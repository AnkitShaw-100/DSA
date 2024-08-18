#include <iostream>
using namespace std;

// Function to swap two integers using call by value
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    // Call the swap function
    swap(x, y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}