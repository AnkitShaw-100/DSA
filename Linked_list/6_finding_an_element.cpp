#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertArrtoLL(vector<int>& arr) {
    //if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int checkifpresent(Node* head, int value) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == value) return 1;
        temp = temp->next;
    }
    return 0;
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 4, 6, 7, 7, 8};
    Node* head = convertArrtoLL(arr);
    cout << checkifpresent(head, 5);
    return 0;
}