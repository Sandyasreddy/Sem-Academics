#include <stdio.h>

// Function to calculate the transpose of a 2D matrix
void transposeMatrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

// Function to display a 2D matrix
void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Example 2D matrix
    int rows = 3, cols = 4;
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Display the original matrix
    printf("Original Matrix:\n");
    displayMatrix(rows, cols, matrix);

    // Transpose the matrix
    int transposedMatrix[cols][rows];
    transposeMatrix(rows, cols, matrix, transposedMatrix);

    // Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    displayMatrix(cols, rows, transposedMatrix);

    return 0;
}
