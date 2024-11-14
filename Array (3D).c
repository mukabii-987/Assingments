#include <stdio.h>

int main() {
    // Declare and initialize the 3D array
    int scores[3][2][2] = {
        {{33, 52}, {10, 12}},
        {{45, 98}, {35, 60}},
        {{184, 76}, {80, 42}}
    };

    // Nested loops to print each element of the 3D array
    for (int i = 0; i < 3; i++) {          // Loop for rows
        for (int j = 0; j < 2; j++) {      // Loop for columns
            for (int k = 0; k < 2; k++) {  // Loop for depth
                printf("scores[%d][%d][%d] = %d\n", i, j, k, scores[i][j][k]);
            }
        }
    }

    return 0;
}