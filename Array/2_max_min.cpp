#include<iostream>
using namespace std;
int max(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int n){
    int min = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int second_max(int arr[], int n){
    if (n < 2) { // If there are less than 2 elements, second maximum doesn't exist
        return 0; // or some other error value
    }
    
    int max = arr[0];
    int s_max = arr[0];
    for(int i = 0; i < n; i++){
        if (arr[i] > max) {
            s_max = max;
            max = arr[i];
        }        
    }
    return s_max;
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
    
    int maximum = max(arr, n);
    int minimum = min(arr, n);
    int second = second_max(arr, n);

    cout << "Maximum element of array is : " << maximum << endl;
    cout << "Minimum element of array is : " << minimum << endl;
    cout << "Second largest element of array is : " << second << endl;

    
    return 0;
}