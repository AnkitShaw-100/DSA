#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool checkBalancedParentheses(const string& str) {
    stack<char> s;

    for (int i = 0; i < str.size(); i++) {
        // Opening
        if (str[i] == '(') {
            s.push(str[i]);
        }
        // Closing
        else {
            if (s.empty()) {
                return false;
            } else {
                s.pop();
            }
        }
    }
    return s.empty();
}

int main() {
    string str = "()(((()))))()()";
    cout << (checkBalancedParentheses(str) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}