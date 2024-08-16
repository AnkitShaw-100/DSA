#include<iostream>
using namespace std;

int reverse(int arr[], int n){
    int brr[n];
    for(int i=n; i>=0; i--){
        brr[i] = arr[n-i-1];
    }
    for(int i=0; i<n; i++){
        cout << "Reversed array is : " << brr[i] << endl;
    }
    return 0;
}
int main(){ 
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout << "Enter the elements of array : ";
        cin >> arr[i];
    }

    reverse(arr , n);
    return 0;
}