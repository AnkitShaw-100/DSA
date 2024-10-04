#include <iostream>
#include <stack>
using namespace std;

// Function to insert an integer at the bottom of the stack
void insertAtBottom(stack<int>& st, int x) {
    stack<int> temp;

    // Move all elements from the original stack to the temporary stack
    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }

    // Push the new element to the bottom of the original stack
    st.push(x);

    // Move all elements back from the temporary stack to the original stack
    while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << "Original stack: ";
    stack<int> temp = st;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    insertAtBottom(st, 0);

    cout << "Stack after inserting 0 at the bottom: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}