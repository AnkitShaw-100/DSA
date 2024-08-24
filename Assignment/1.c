#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Global pointer to the head of the linked list
Node* head = NULL;

// Function to insert a node at the end of the list
void insertNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to delete a node by value
void deleteNode(int value) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        free(temp);
        return;
    }

    Node* temp = head;
    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Value not found in the list.\n");
    } else {
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        free(nodeToDelete);
    }
}

// Function to display the linked list
void displayList() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to reverse the linked list
void reverseList() {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

// Function to search for a node by value
int searchNode(int value) {
    Node* temp = head;
    int index = 0;

    while (temp != NULL) {
        if (temp->data == value) {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

// Main function with menu-driven program
int main() {
    int choice, value, result;

    do {
        printf("\nMenu:\n");
        printf("1. Insert a node at the end of the list\n");
        printf("2. Delete a node by value\n");
        printf("3. Display the list\n");
        printf("4. Reverse the list\n");
        printf("5. Search for a node\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertNode(value);
                break;
            case 2:
                printf("Enter the value to delete: ");
                scanf("%d", &value);
                deleteNode(value);
                break;
            case 3:
                displayList();
                break;
            case 4:
                reverseList();
                printf("List reversed.\n");
                break;
            case 5:
                printf("Enter the value to search: ");
                scanf("%d", &value);
                result = searchNode(value);
                if (result != -1) {
                    printf("Value found at index: %d\n", result);
                } else {
                    printf("Value not found in the list.\n");
                }
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

