#include <iostream>
#include <climits> 
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

    for(int i = 0; i < n; i++){
        int m = INT_MAX;
        int mindx = -1;
        for(int j = i; j < n; j++){
            if(m > arr[j]){
                m = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}