#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node (int data1, Node* next1){
        data = data1;
        next = next1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
int main(){
    vector<int>arr = {11,2,44,287,281};
    Node* y = new Node(arr[0]);
    cout << y-> data;
    return 0;
}