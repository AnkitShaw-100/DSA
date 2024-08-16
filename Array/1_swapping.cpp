#include<iostream>
using namespace std;
int swapping(int arr[], int n){
    int start = 0, end = n-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return 0;
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

     cout << "Array before swapping: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    swapping(arr, n);

    cout << "Array after swapping: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}