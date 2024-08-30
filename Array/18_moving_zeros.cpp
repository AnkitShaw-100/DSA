#include <iostream>
#include <vector>
using namespace std;

void moveZerosToEnd(vector<int>& a) {
    vector<int> temp;
    int n = a.size();

    // Collect non-zero elements
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            temp.push_back(a[i]);
        }
    }

    int nz = temp.size();
    // Copy non-zero elements back to the array
    for (int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }

    // Fill the rest of the array with zeros
    for (int i = nz; i < n; i++) {
        a[i] = 0;
    }
}

int main() {
    vector<int> a = {0, 1, 0, 3, 12};
    moveZerosToEnd(a);

    // Print the result
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}