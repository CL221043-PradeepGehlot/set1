#include <stdio.h>

void printPattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        // Print increasing numbers starting from i to rows
        for (int j = i; j < rows; j++) {
            printf("%d", j + 1);
        }
        // Print remaining columns with the last number (which is rows)
        for (int j = rows; j >= i; j--) {
            printf("%d", rows);
        }
        printf("\n");
    }
}

int main() {
    int rows;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Call the function to print the pattern
    printPattern(rows);

    return 0;
}

