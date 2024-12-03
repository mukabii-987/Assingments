#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Student students[5];

    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
        fprintf(file, "Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
    }

    fclose(file);
    printf("Data written to file successfully.\n");
    return 0;
}