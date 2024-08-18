#include <iostream>
using namespace std;

// Function to modify a copied array
void modifyArray(int s[], int size) {
    // Create a copy of the array
    int arr[5];
    for (int i = 0; i < size; ++i) {
        arr[i] = s[i];
    }

    // Modify the copied array
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2; // Double each element
    }

    cout << "Inside modifyArray: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int s[5] = {1, 2, 3, 4, 5};

    cout << "Before modification: ";
    for (int i = 0; i < 5; ++i) {
        cout << s[i] << " ";
    }
    cout << endl;

    // Call the modifyArray function
    modifyArray(s, 5);

    cout << "After modification: ";
    for (int i = 0; i < 5; ++i) {
        cout << s[i] << " ";
    }
    cout << endl;

    return 0;
}