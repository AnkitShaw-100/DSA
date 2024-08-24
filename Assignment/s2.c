#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char ch) {
    if (top < MAX_SIZE - 1) {
        stack[++top] = ch;
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0';
}

bool isEmpty() {
    return top == -1;
}

bool isParenthesesMatch(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '(') {
            push(str[i]);
        } else if (str[i] == ')') {
            if (isEmpty()) {
                return false;
            }
            pop();
        }
    }
    return isEmpty();
}

int main() {
    char test1[] = "(())()";
    char test2[] = "((())";
    char test3[] = "())(()";

    printf("Test 1: %s\n", isParenthesesMatch(test1) ? "Balanced" : "Unbalanced");
    printf("Test 2: %s\n", isParenthesesMatch(test2) ? "Balanced" : "Unbalanced");
    printf("Test 3: %s\n", isParenthesesMatch(test3) ? "Balanced" : "Unbalanced");

    return 0;
}
