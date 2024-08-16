#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Task structure
typedef struct Task {
    int taskId;
    char description[100];
    int priority;
    struct Task* next;
} Task;

// Function to add a task to the task list
void addTask(Task** head, int taskId, char description[], int priority) {
    Task* newTask = (Task*)malloc(sizeof(Task));
    newTask->taskId = taskId;
    strcpy(newTask->description, description);
    newTask->priority = priority;
    newTask->next = NULL;

    if (*head == NULL) {
        *head = newTask;
    } else {
        Task* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newTask;
    }
}

// Function to delete a task from the task list
void deleteTask(Task** head, int taskId) {
    if (*head == NULL) {
        printf("Task list is empty.\n");
        return;
    }

    if ((*head)->taskId == taskId) {
        Task* temp = *head;
        *head = (*head)->next;
        free(temp);
        printf("Task deleted: %d\n", taskId);
        return;
    }

    Task* temp = *head;
    while (temp->next != NULL && temp->next->taskId != taskId) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Task not found in the list.\n");
    } else {
        Task* taskToDelete = temp->next;
        temp->next = temp->next->next;
        free(taskToDelete);
        printf("Task deleted: %d\n", taskId);
    }
}

// Function to display all tasks in the task list
void displayTasks(Task* head) {
    if (head == NULL) {
        printf("Task list is empty.\n");
        return;
    }

    Task* temp = head;
    while (temp != NULL) {
        printf("Task ID: %d, Description: %s, Priority: %d\n", temp->taskId, temp->description, temp->priority);
        temp = temp->next;
    }
}

// Function to prioritize tasks based on their priority
void prioritizeTasks(Task** head) {
    if (*head == NULL || (*head)->next == NULL) {
        printf("No prioritization needed.\n");
        return;
    }

    Task *i, *j;
    int tempId, tempPriority;
    char tempDescription[100];

    for (i = *head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->priority > j->priority) {
                // Swap taskId
                tempId = i->taskId;
                i->taskId = j->taskId;
                j->taskId = tempId;

                // Swap description
                strcpy(tempDescription, i->description);
                strcpy(i->description, j->description);
                strcpy(j->description, tempDescription);

                // Swap priority
                tempPriority = i->priority;
                i->priority = j->priority;
                j->priority = tempPriority;
            }
        }
    }
    printf("Tasks have been prioritized.\n");
}

// Function to search for a task by taskId
int searchTask(Task* head, int taskId) {
    Task* temp = head;
    int index = 0;

    while (temp != NULL) {
        if (temp->taskId == taskId) {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

// Main function with menu-driven program
int main() {
    Task* head = NULL;
    int choice;
    int taskId, priority, result;
    char description[100];

    do {
        printf("\nMenu:\n");
        printf("1. Add a task\n");
        printf("2. Delete a task\n");
        printf("3. Display all tasks\n");
        printf("4. Prioritize tasks\n");
        printf("5. Search for a task\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character after entering the choice

        switch (choice) {
            case 1:
                printf("Enter the task ID: ");
                scanf("%d", &taskId);
                getchar(); // Consume newline character

                printf("Enter the task description: ");
                fgets(description, 100, stdin);
                description[strcspn(description, "\n")] = 0; // Remove newline character

                printf("Enter the task priority: ");
                scanf("%d", &priority);

                addTask(&head, taskId, description, priority);
                break;
            case 2:
                printf("Enter the task ID to delete: ");
                scanf("%d", &taskId);

                deleteTask(&head, taskId);
                break;
            case 3:
                displayTasks(head);
                break;
            case 4:
                prioritizeTasks(&head);
                break;
            case 5:
                printf("Enter the task ID to search: ");
                scanf("%d", &taskId);

                result = searchTask(head, taskId);
                if (result != -1) {
                    printf("Task found at position: %d\n", result);
                } else {
                    printf("Task not found in the list.\n");
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
