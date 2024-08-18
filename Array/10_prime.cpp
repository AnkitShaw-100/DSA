#include<iostream>
#include<vector>
using namespace std;

int prime(int n){

    vector<int> prime(n + 1, 0);
    for(int i = 2; i * i <= n; i++){
        if(prime[i] == 0){
            for(int j = i * i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }

    for(int i = 2; i <= n; i++){
        if(prime[i] == 0){
            cout << i << endl;
        }
    }

    return 0;
} 

int main(){
    
    int n;
    cout << "Enter the number : ";
    cin >> n;
    prime(n);

    return 0;
}