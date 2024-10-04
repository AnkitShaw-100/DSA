#include <iostream>
using namespace std;

class Stack {
    int maxsize;
    int *arr;
    int top;

public:
    Stack(int s) {
        top = -1;
        maxsize = s;
        arr = new int[maxsize];
    }

    // Push
    void push(int x) {
        if (top == maxsize - 1) {
            cout << "Stack Overflow\n";
            return;
        } else {
            top++;
            arr[top] = x;
            cout << "Pushed " << x << " into the stack\n";
        }
    }

    // Pop
    int pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        } else {
            int poppedElement = arr[top];
            top--;
            cout << "Popped " << poppedElement << " from the stack\n";
            return poppedElement;
        }
    }

    // Peek
    int peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return -1;
        } else {
            return arr[top];
        }
    }

    // Is empty
    bool isEmpty() {
        return top == -1;
    }

    // Size
    int size() {
        return top + 1;
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(5); // Initialize stack with size 5
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6); // This will cause stack overflow

    cout << "Top of stack before deleting any element: " << s.peek() << endl;
    cout << "Size of stack before deleting any element: " << s.size() << endl;
    cout << "The element deleted is: " << s.pop() << endl;
    cout << "Size of stack after deleting an element: " << s.size() << endl;
    cout << "Top of stack after deleting an element: " << s.peek() << endl;

    return 0;
}