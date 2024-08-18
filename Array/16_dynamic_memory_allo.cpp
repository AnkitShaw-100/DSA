#include <iostream>
using namespace std;

int getsum(int *arr, int n){    
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main() {   
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;

    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = getsum(arr, n);
    cout << "Answer is : " << ans <<endl;

    delete[] arr;
  
    return 0;
} 