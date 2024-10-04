#include <iostream>
#include <vector>
#include <stack>
using namespace std;

stack<string> processVector(const vector<string>& v) {
    stack<string> s;

    for (int i = 0; i < v.size(); i++) {
        if (s.empty()) {
            s.push(v[i]);
        } else if (s.top() == v[i]) {
            s.pop();
        } else {
            s.push(v[i]);
        }
    }

    return s;
}

int main() {
    vector<string> v = {"ab", "aa", "aa", "bcd", "ab"};
    stack<string> resultStack = processVector(v);

    cout << "Resulting stack size: " << resultStack.size() << endl;
    cout << "Remaining elements in the stack: ";
    while (!resultStack.empty()) {
        cout << resultStack.top() << " ";
        resultStack.pop();
    }
    cout << endl;

    return 0;
}