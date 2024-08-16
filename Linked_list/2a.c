#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the Song structure
typedef struct Song {
    char title[100];
    char artist[100];
    struct Song* next;
} Song;

// Function to add a song to the playlist
void addSong(Song** head, char title[], char artist[]) {
    Song* newSong = (Song*)malloc(sizeof(Song));
    strcpy(newSong->title, title);
    strcpy(newSong->artist, artist);
    newSong->next = NULL;

    if (*head == NULL) {
        *head = newSong;
    } else {
        Song* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newSong;
    }
}

// Function to delete a song from the playlist
void deleteSong(Song** head, char title[]) {
    if (*head == NULL) {
        printf("Playlist is empty.\n");
        return;
    }

    if (strcmp((*head)->title, title) == 0) {
        Song* temp = *head;
        *head = (*head)->next;
        free(temp);
        printf("Song deleted: %s\n", title);
        return;
    }

    Song* temp = *head;
    while (temp->next != NULL && strcmp(temp->next->title, title) != 0) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Song not found in the playlist.\n");
    } else {
        Song* songToDelete = temp->next;
        temp->next = temp->next->next;
        free(songToDelete);
        printf("Song deleted: %s\n", title);
    }
}

// Function to display the playlist
void displayPlaylist(Song* head) {
    if (head == NULL) {
        printf("Playlist is empty.\n");
        return;
    }

    Song* temp = head;
    while (temp != NULL) {
        printf("Title: %s, Artist: %s\n", temp->title, temp->artist);
        temp = temp->next;
    }
}

// Function to simulate playing the playlist sequentially
void playPlaylist(Song* head) {
    if (head == NULL) {
        printf("Playlist is empty.\n");
        return;
    }

    Song* temp = head;
    while (temp != NULL) {
        printf("Playing: %s by %s\n", temp->title, temp->artist);
        temp = temp->next;
    }
}

// Function to search for a song by title
int searchSong(Song* head, char title[]) {
    Song* temp = head;
    int index = 0;

    while (temp != NULL) {
        if (strcmp(temp->title, title) == 0) {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

// Main function with menu-driven program
int main() {
    Song* head = NULL;
    int choice;
    char title[100], artist[100];
    int result;

    do {
        printf("\nMenu:\n");
        printf("1. Add a song to the playlist\n");
        printf("2. Delete a song from the playlist\n");
        printf("3. Display the playlist\n");
        printf("4. Play the playlist\n");
        printf("5. Search for a song\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character after entering the choice

        switch (choice) {
            case 1:
                printf("Enter the song title: ");
                fgets(title, 100, stdin);
                title[strcspn(title, "\n")] = 0; // Remove newline character

                printf("Enter the artist name: ");
                fgets(artist, 100, stdin);
                artist[strcspn(artist, "\n")] = 0; // Remove newline character

                addSong(&head, title, artist);
                break;
            case 2:
                printf("Enter the song title to delete: ");
                fgets(title, 100, stdin);
                title[strcspn(title, "\n")] = 0; // Remove newline character

                deleteSong(&head, title);
                break;
            case 3:
                displayPlaylist(head);
                break;
            case 4:
                playPlaylist(head);
                break;
            case 5:
                printf("Enter the song title to search: ");
                fgets(title, 100, stdin);
                title[strcspn(title, "\n")] = 0; // Remove newline character

                result = searchSong(head, title);
                if (result != -1) {
                    printf("Song found at position: %d\n", result);
                } else {
                    printf("Song not found in the playlist.\n");
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
