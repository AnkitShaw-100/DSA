#include <iostream>
using namespace std;

int intersection(int arr[],int brr[], int n, int m){
    int k = 0;
    int crr[m+n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i]==brr[j]){
                crr[k++] = arr[i];
                break;
            }
        }
    }
    cout << "Intersection elements are: ";
    for (int i = 0; i < k; i++) {
        cout << crr[i] << " ";
    }
    cout << endl;
    return k;
}
int main() {
    int n,m; 
    cout << "Enter the size of array :";
    cin >> n;

    int arr[n]; 
    for(int i = 0; i < n; i++){
        cout <<"Enter the elements : ";
        cin >> arr[i];
    }
     
    cout << "Enter the size of second array :";
    cin >> m;

    int brr[m];
    for(int i = 0; i < m; i++){
        cout <<"Enter the elements : ";
        cin >> brr[i];
    }
    
    int result = intersection(arr, brr, n, m);
    cout << "Number of intersection elements: " << result << endl;

    return 0;
}