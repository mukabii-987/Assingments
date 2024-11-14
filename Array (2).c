#include <stdio.h>

int main() {
    // Declaration and initialization of 2D array
    int scores[2][2] = { {65, 92}, {35, 70} };

    // Printing elements using a nested for loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}