#include <stdio.h>

int main() {
    // PART 1: Matrix 3x3 (double)
    double matrix3x3[3][3];
    double main_diag_sum = 0, secondary_diag_sum = 0;
    int i, j;

    printf("Enter elements of 3x3 matrix (double):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matrix3x3[%d][%d] = ", i, j);
            scanf("%lf", &matrix3x3[i][j]);
        }
    }

    
    for (i = 0; i < 3; i++) {
        main_diag_sum += matrix3x3[i][i];              
        secondary_diag_sum += matrix3x3[i][2 - i];     
    }

    printf("\nSum of main diagonal: %.2f\n", main_diag_sum);
    printf("Sum of secondary diagonal: %.2f\n", secondary_diag_sum);

    // PART 2: Matrix 2x2 (int) and its square
    int matrix2x2[2][2];
    int result[2][2];

    printf("\nEnter elements of 2x2 matrix (int):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("matrix2x2[%d][%d] = ", i, j);
            scanf("%d", &matrix2x2[i][j]);
        }
    }

    
    result[0][0] = matrix2x2[0][0] * matrix2x2[0][0] + matrix2x2[0][1] * matrix2x2[1][0];
    result[0][1] = matrix2x2[0][0] * matrix2x2[0][1] + matrix2x2[0][1] * matrix2x2[1][1];
    result[1][0] = matrix2x2[1][0] * matrix2x2[0][0] + matrix2x2[1][1] * matrix2x2[1][0];
    result[1][1] = matrix2x2[1][0] * matrix2x2[0][1] + matrix2x2[1][1] * matrix2x2[1][1];

    printf("\nSquare of the matrix:\n");
    printf("%d %d\n", result[0][0], result[0][1]);
    printf("%d %d\n", result[1][0], result[1][1]);

    return 0;
}
