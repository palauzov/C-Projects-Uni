#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int findMaxSum(int **matrix, int rows, int cols, int row, int col) {
    int maxSum = 0;

    
    for (int i = row - 1; i <= row + 1; i++) {
        for (int j = col - 1; j <= col + 1; j++) {

            if (i >= 0 && i < rows && j >= 0 && j < cols) {
                
                if (i != row || j != col) {
                    maxSum += matrix[i][j];
                }
            }
        }
    }

    return maxSum;
}


void findMaxSumCell(int **matrix, int rows, int cols, int *maxRow, int *maxCol) {
    int maxSum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           
            int currentSum = findMaxSum(matrix, rows, cols, i, j);
      
            if (currentSum > maxSum) {
                maxSum = currentSum;
                *maxRow = i;
                *maxCol = j;
            }
        }
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

   
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

   
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxRow, maxCol;


    findMaxSumCell(matrix, rows, cols, &maxRow, &maxCol);

   
    printf("The maximum sum of neighboring numbers is: %d\n", findMaxSum(matrix, rows, cols, maxRow, maxCol));
    printf("Position of the cell: row %d, column %d\n", maxRow, maxCol);

    
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}