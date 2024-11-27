#include <stdio.h>

void printPattern(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n"); 
    }
}

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    printPattern(rows, cols);

    return 0;
}

