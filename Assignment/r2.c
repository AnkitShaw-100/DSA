#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int data;
    struct Node* next;
};

int linkedListLength(struct Node* head) {
    if (head == NULL) {
        return 0;
    }
    return 1 + linkedListLength(head->next);
}

int searchLinkedList(struct Node* head, int value) {
    if (head == NULL) {
        return 0;
    }
    if (head->data == value) {
        return 1;
    }
    return searchLinkedList(head->next, value);
}

struct Node* mergeSortedLists(struct Node* list1, struct Node* list2) {
    if (list1 == NULL) {
        return list2;
    }
    if (list2 == NULL) {
        return list1;
    }
    if (list1->data < list2->data) {
        list1->next = mergeSortedLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeSortedLists(list1, list2->next);
        return list2;
    }
}

struct Node* reverseLinkedList(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct Node* rest = reverseLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;
    return rest;
}

struct Node* findMiddleHelper(struct Node* slow, struct Node* fast) {
    if (fast == NULL || fast->next == NULL) {
        return slow;
    }
    return findMiddleHelper(slow->next, fast->next->next);
}

struct Node* findMiddleNode(struct Node* head) {
    if (head == NULL) {
        return NULL;
    }
    return findMiddleHelper(head, head);
}

int isBalanced(char* str, int index) {
    if (str[index] == '\0') {
        return 1;
    }
    if (str[index] == '(') {
        return isOpenParenthesis(str, index + 1);
    }
    return isBalanced(str, index + 1);
}

int isOpenParenthesis(char* str, int index) {
    if (str[index] == '\0') {
        return 0;
    }
    if (str[index] == ')') {
        return isBalanced(str, index + 1);
    }
    return isOpenParenthesis(str, index + 1);
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    struct Node* head = NULL;
    struct Node* head2 = NULL;
    struct Node* merged = NULL;

    push(&head, 20);
    push(&head, 15);
    push(&head, 10);
    push(&head, 5);

    push(&head2, 25);
    push(&head2, 18);
    push(&head2, 12);
    push(&head2, 6);

    int length = linkedListLength(head);
    printf("Length of the linked list: %d\n", length);

    int search_result = searchLinkedList(head, 15);
    printf("Element 15 found: %s\n", search_result ? "Yes" : "No");

    merged = mergeSortedLists(head, head2);
    printf("Merged Linked List: ");
    printList(merged);

    struct Node* reversed = reverseLinkedList(merged);
    printf("Reversed Linked List: ");
    printList(reversed);

    struct Node* middle = findMiddleNode(reversed);
    if (middle != NULL) {
        printf("Middle node data: %d\n", middle->data);
    }

    char str[100];
    printf("Enter a string of parentheses: ");
    scanf("%s", str);
    if (isBalanced(str, 0)) {
        printf("The parentheses are balanced.\n");
    } else {
        printf("The parentheses are not balanced.\n");
    }

    return 0;
}
