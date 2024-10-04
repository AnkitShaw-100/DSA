#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> makeBeautiful(vector<int> arr) {
    stack<int> s;

    for (int i = 0; i < arr.size(); i++) {
        // Stack can be empty
        if (s.empty()) {
            s.push(arr[i]);
        }
        // Non-negative number
        else if (arr[i] >= 0) {
            // Non-negative
            if (s.top() >= 0) {
                s.push(arr[i]);
            }
            // Negative number
            else {
                s.pop();
            }
        }
        // Negative number
        else {
            // Negative
            if (s.top() < 0) {
                s.push(arr[i]);
            }
            // Non-negative
            else {
                s.pop();
            }
        }
    }

    vector<int> ans(s.size());
    int i = s.size() - 1;
    while (!s.empty()) {
        ans[i] = s.top();
        i--;
        s.pop();
    }
    return ans;
}

int main() {
    vector<int> arr = {1, -1, 2, -2, 3, -3, 4, -4};
    vector<int> result = makeBeautiful(arr);

    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
} 