#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 200
#define FILENAME "output.txt"

// Function to write a paragraph to the file
void writeParagraph() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }
    
    char paragraph[MAX_LENGTH + 1];
    printf("Enter a paragraph (up to 200 characters): ");
    fgets(paragraph, MAX_LENGTH + 1, stdin);

    if (fputs(paragraph, file) == EOF) {
        perror("Error writing to file");
    } else {
        printf("Paragraph written to file successfully.\n");
    }

    fclose(file);
}

// Function to read and display content from the file
void readParagraph() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }
    
    char paragraph[MAX_LENGTH + 1];
    printf("File content:\n");
    while (fgets(paragraph, MAX_LENGTH + 1, file) != NULL) {
        printf("%s", paragraph);
    }

    fclose(file);
}

// Function to append an additional paragraph to the file
void appendParagraph() {
    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }
    
    char paragraph[MAX_LENGTH + 1];
    printf("Enter another paragraph to append (up to 200 characters): ");
    fgets(paragraph, MAX_LENGTH + 1, stdin);

    if (fputs(paragraph, file) == EOF) {
        perror("Error appending to file");
    } else {
        printf("Paragraph appended to file successfully.\n");
    }

    fclose(file);
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Write a paragraph to file\n");
        printf("2. Read content from file\n");
        printf("3. Append a paragraph to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character left in the input buffer

        switch (choice) {
            case 1:
                writeParagraph();
                break;
            case 2:
                readParagraph();
                break;
            case 3:
                appendParagraph();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}