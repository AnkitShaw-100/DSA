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

void InsertAtHead(node* &head, int n){

    node* temp = new node(n);
    temp -> next = head;
    head = temp;
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
    print(head);
    InsertAtHead(head, 120);
    print(head); 
    InsertAtHead(head, 220);
    print(head); 
    InsertAtHead(head, 320);
    print(head); 
    InsertAtHead(head, 420);
    print(head);
    InsertAtHead(head, 520);
    print(head); 
    return 0;
}