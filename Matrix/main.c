#include <stdio.h>

int main() {
    int A[4][4] = {
        {1, 9, 6, 8},
        {10, 25, 12, 3},
        {11, 14, 17, 5},
        {10, 20, 25, 18}
    };

    int B[4][4] = {
        {3, 8, 10, 14},
        {2, 9, 8, 3},
        {12, 10, 14, 9},
        {11, 14, 10, 5}
    };

    int i, j;

    // Addition
    printf("Addition:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%4d", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    // Subtraction
    printf("\nSubtraction:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%4d", A[i][j] - B[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    printf("\nMultiplication:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%4d", A[i][j] * B[i][j]);
        }
        printf("\n");
    }

    // Division
    printf("\nDivision:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if (B[i][j] != 0)
                printf("%4d", A[i][j] / B[i][j]);
            else
                printf("   0");
        }
        printf("\n");
    }

    return 0;
}
