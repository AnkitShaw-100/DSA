#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array : " <<endl;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++ ){
        cout << "Enter the elements : " <<endl;
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

        for(int i = 0; i < n; i++ ){
        cout << "Enter the elements are : "<< arr[i] <<endl;
    }
    return 0;
}