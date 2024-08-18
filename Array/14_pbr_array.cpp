#include <iostream>
using namespace std;

// Function to modify an array by reference
void modifyArray(int (&arr)[5]) {
    for (int i = 0; i < 5; ++i) {
        arr[i] *= 2; // Double each element
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Before modification: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the modifyArray function
    modifyArray(arr);

    cout << "After modification: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}