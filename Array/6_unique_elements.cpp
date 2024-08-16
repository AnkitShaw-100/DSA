#include <iostream>
using namespace std;

int unique(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
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
    
    int sum = unique(arr, n);
    
    cout << "unique element is : " << sum << endl;

    return 0;
}