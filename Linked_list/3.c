#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Student structure
typedef struct Student {
    char name[100];
    int rollNumber;
    float marks;
    struct Student* next;
} Student;

// Global pointer to the head of the linked list
Student* head = NULL;

// Function to add a student record to the linked list
void addStudent(char name[], int rollNumber, float marks) {
    Student* newStudent = (Student*)malloc(sizeof(Student));
    strcpy(newStudent->name, name);
    newStudent->rollNumber = rollNumber;
    newStudent->marks = marks;
    newStudent->next = NULL;

    if (head == NULL) {
        head = newStudent;
    } else {
        Student* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newStudent;
    }
}

// Function to delete a student record from the linked list
void deleteStudent(int rollNumber) {
    if (head == NULL) {
        printf("Student list is empty.\n");
        return;
    }

    if (head->rollNumber == rollNumber) {
        Student* temp = head;
        head = head->next;
        free(temp);
        printf("Student record deleted: %d\n", rollNumber);
        return;
    }

    Student* temp = head;
    while (temp->next != NULL && temp->next->rollNumber != rollNumber) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Student record not found.\n");
    } else {
        Student* studentToDelete = temp->next;
        temp->next = temp->next->next;
        free(studentToDelete);
        printf("Student record deleted: %d\n", rollNumber);
    }
}

// Function to display all student records in the linked list
void displayStudents() {
    if (head == NULL) {
        printf("Student list is empty.\n");
        return;
    }

    Student* temp = head;
    while (temp != NULL) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", temp->name, temp->rollNumber, temp->marks);
        temp = temp->next;
    }
}

// Function to search for a student record by roll number
int searchStudent(int rollNumber) {
    Student* temp = head;
    int index = 0;

    while (temp != NULL) {
        if (temp->rollNumber == rollNumber) {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

// Main function with menu-driven program
int main() {
    int choice;
    int rollNumber;
    float marks;
    char name[100];
    int result;

    do {
        printf("\nMenu:\n");
        printf("1. Add a student record\n");
        printf("2. Delete a student record\n");
        printf("3. Display all student records\n");
        printf("4. Search for a student record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character after entering the choice

        switch (choice) {
            case 1:
                printf("Enter the student's name: ");
                fgets(name, 100, stdin);
                name[strcspn(name, "\n")] = 0; // Remove newline character

                printf("Enter the roll number: ");
                scanf("%d", &rollNumber);

                printf("Enter the marks: ");
                scanf("%f", &marks);

                addStudent(name, rollNumber, marks);
                break;
            case 2:
                printf("Enter the roll number to delete: ");
                scanf("%d", &rollNumber);

                deleteStudent(rollNumber);
                break;
            case 3:
                displayStudents();
                break;
            case 4:
                printf("Enter the roll number to search: ");
                scanf("%d", &rollNumber);

                result = searchStudent(rollNumber);
                if (result != -1) {
                    printf("Student found at position: %d\n", result);
                } else {
                    printf("Student record not found.\n");
                }
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
