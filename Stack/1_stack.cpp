#include<bits/stdc++.h>

using namespace std;
class Stack{
    int maxsize;
    int *arr;
    int top;
    public:
    Stack(){
        top = -1;
        maxsize = 1000;
        arr = new int[maxsize];
    }
    void push(int x){
        top++;
        arr[top] = x;
    }
    int pop(){
        int x = arr[top];
        top--;
        return x;
    }
    int Top(){
        return arr[top];
    }
    int currentsize(){
        return top + 1;
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout << "Top of stack is before deleting any element " << s.Top() << endl;
    cout << "Size of stack before deleting any element " << s.currentsize() << endl;
    cout << "The element deleted is " << s.pop() << endl;
    cout << "Size of stack after deleting an element " << s.currentsize() << endl;
    cout << "Top of stack after deleting an element " << s.Top() << endl;
    return 0;
}