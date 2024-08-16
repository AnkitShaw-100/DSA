#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cout << "Enter the elements of array : ";
        cin >> arr[i];
    }

    for(int i = 0; i < n-1; i++){
        int j = i + 1;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}