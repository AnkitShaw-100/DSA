#include <iostream>
using namespace std;

int duplicates(int arr[], int n, int key){
    
    bool found = false;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == key){
                cout << "Pair with sum " << key << ": (" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }
    if (!found) {
        cout << "No pairs found with sum " << key << endl;
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