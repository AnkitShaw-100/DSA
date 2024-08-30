#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // Example array
    int n = arr.size();
    
    vector<int> prefix(n); // Corrected: Added semicolon
    prefix[0] = arr[0];
    
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Print the prefix sum array
    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }
    cout << endl;

    return 0;
}