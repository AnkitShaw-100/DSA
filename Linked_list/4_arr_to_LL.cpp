#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
    Node* convertArrtoLL(vector<int>&arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;

        for(int i = 1; i<arr.size(); i++){
            Node* temp =  new Node(arr[i]);
            mover -> next = temp;
            mover =  temp;
        }
        return head;
    }
 
int main(){
    vector<int> arr = {12,45,5,4,3};
    Node* head = convertArrtoLL(arr);
    Node* temp = head;
    while (temp){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    
    // cout << head-> data;
    return 0;
}
