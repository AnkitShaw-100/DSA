#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class stack {
    node* top;
    int size;

public:
    // Constructor
    stack() {
        top = NULL;
        size = 0;
    }

    // Push
    void push(int data) {
        node* temp = new node(data);
        if (temp == NULL) {
            cout << "Stack Overflow\n";
            return;
        } else {
            temp->next = top;
            top = temp;
            size++;
            cout << "Pushed " << data << " into the stack\n";
        }
    }

    // Pop
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow\n";
        } else {
            node* temp = top;
            cout << "Popped " << top->data << " from the stack\n";
            top = top->next;
            delete temp;
            size--;
        }
    }

    // Peek
    int peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
            return -1;
        } else {
            return top->data;
        }
    }

    // Is empty
    bool isEmpty() {
        return top == NULL;
    }

    // Size
    int getSize() {
        return size;
    }
};

int main() {
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    cout << "Top element is: " << s.peek() << endl;
    cout << "Size of stack is: " << s.getSize() << endl;
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}