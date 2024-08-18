#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this-> data = data;
        this-> next = nullptr;
    }
};

void InsertAtTail(node* &tail, int n){
    node* temp = new node(n);
    tail -> next = temp;
    tail = tail -> next;
}

void print(node* &head){
    node* temp = head;
    while(temp!= NULL){
        cout << temp -> data << " ";
        temp = temp -> next; 
    }
    cout << endl;
}

int main(){

    node* node1 = new node(100);
    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    node* head = node1;
    node* tail = node1;
    print(head);
    InsertAtTail(tail, 120);
    print(head); 
    InsertAtTail(tail, 220);
    print(head); 
    InsertAtTail(tail, 320);
    print(head); 
    InsertAtTail(tail, 420);
    print(head);
    InsertAtTail(tail, 520);
    print(head); 
    return 0;
}