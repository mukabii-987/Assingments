#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    FILE *file = fopen("students.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student student;
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", student.name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &student.marks);
        fprintf(file, "Name: %s, Marks: %.2f\n", student.name, student.marks);
    }

    fclose(file);
    printf("Data appended to file successfully.\n");
    return 0;
}