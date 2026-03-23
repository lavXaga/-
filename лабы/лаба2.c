#include <stdio.h>

int main() {
   	char choice = 'y';
   	while (choice == 'y' || choice == 'Y') {
        printf("\n=== Solving Quadratic Equation ===\n");
        
        int n = 4;
		double mat[n][n];
	    double sum_main = 0, sum_sec = 0;
	    int i, j;
	    int mat2[2][2];
	    int res[2][2];
		
	    printf("Enter elements of %dx%d matrix (double):\n", n, n);
	    for (i = 0; i < n; i++) {
	        for (j = 0; j < n; j++) {
	            printf("mat[%d][%d] = ", i, j);
	            scanf("%lf", &mat[i][j]);
	    }
	    }
	
	    for (i = 0; i < n; i++) {
	        sum_main += mat[i][i];
	        sum_sec += mat[i][n - 1 - i];
	    }
	
	    printf("\nSum of main diagonal: %.2f\n", sum_main);
	    printf("Sum of secondary diagonal: %.2f\n", sum_sec);
	
	    printf("\nEnter elements of 2x2 matrix (int):\n");
	    for (i = 0; i < 2; i++) {
	        for (j = 0; j < 2; j++) {
	            printf("mat2[%d][%d] = ", i, j);
	            scanf("%d", &mat2[i][j]);
	        }
	    }
	
	    res[0][0] = mat2[0][0] * mat2[0][0] + mat2[0][1] * mat2[1][0];
	    res[0][1] = mat2[0][0] * mat2[0][1] + mat2[0][1] * mat2[1][1];
	    res[1][0] = mat2[1][0] * mat2[0][0] + mat2[1][1] * mat2[1][0];
	    res[1][1] = mat2[1][0] * mat2[0][1] + mat2[1][1] * mat2[1][1];
	
	    printf("\nSquare of the matrix:\n");
	    printf("%d %d\n", res[0][0], res[0][1]);
	    printf("%d %d\n", res[1][0], res[1][1]);
		printf("continieu - 1,stop-0");
		 printf("\nDo you want to solve another equation? (y/n): ");
        scanf(" %c", &choice); 
	}
    return 0;
}
