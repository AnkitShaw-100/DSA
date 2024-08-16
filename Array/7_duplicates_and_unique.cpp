#include <iostream>
using namespace std;

int duplicates(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                cout << "Duplicate element is " << arr[i] << endl;
                break;
            }
        }
        sum = sum ^ arr[i]; 
    }
    return sum;
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
    
    int result = duplicates(arr, n);
    cout << "Unique element is: " << result << endl;

    return 0;
}