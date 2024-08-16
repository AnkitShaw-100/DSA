#include <iostream>
using namespace std;

int duplicates(int arr[], int n, int key){
    
    bool found = false;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == key) {
                    cout << "Triplet with sum " << key << ": (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
                    found = true;
                }
            }
        }
    }
    if (!found) {
        cout << "No triplets found with sum " << key << endl;
    }
}

int main() {
    int n; 
    cout << "Enter the size of array :";
    cin >> n;

    int arr[n];
    
    for(int i = 0; i < n; i++){
        cout <<"Enter the elements : ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key : ";
    cin >> key;
    
    duplicates(arr, n, key);

    return 0;
}