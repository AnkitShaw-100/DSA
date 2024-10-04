#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    
    // Input a string from user
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    // Reversing
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        st.push(s[i]);
    }

    int i = 0;
    while (!st.empty()) {
        s[i] = st.top();
        st.pop();
        i++;
    }

    cout << "Reversed string: " << s << endl;

    return 0;
}