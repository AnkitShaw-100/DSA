#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack is full!\n");
    } else {
        stack[++top] = value;
    }
}

int pop() {
    if (top < 0) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return stack[top--];
    }
}

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX_SIZE - 1;
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    display();

    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());

    printf("Is stack empty? %s\n", isEmpty() ? "Yes" : "No");

    push(60);
    display();

    return 0;
}
