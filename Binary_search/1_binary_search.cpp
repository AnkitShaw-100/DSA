#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n],start = 0, end = n-1, mid, ele;

    for(int i =0; i<n; i++) {
        cout << "Enter the elements of array : ";
        cin >> arr[i];
    }
 
    cout << "Enter the element you want to check  : ";
    cin >> ele;

    bool found = false;
    
    while(start<=end){

        mid = (start + end)/2;
        if(ele == arr[mid]){
            cout << "Element found at index " << mid << "!" << endl;
            found = true;
            break;
        }
        else if (ele > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
     if (!found) {
        cout << "Element not found!" << endl;
    }

    return 0;

}