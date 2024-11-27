#include <stdio.h>

int printDiamond(int rows) {
    if (rows % 2 == 0) {
        printf("Error: Number of rows must be odd.\n");
        return 0;
    }

    int mid = rows / 2;

    for (int i = 0; i <= mid; i++) {

        for (int j = 0; j < mid - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = mid - 1; i >= 0; i--) {
        for (int j = 0; j < mid - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 1; 
}

int main() {
    int rows;
    printf("Enter an odd number of rows: ");
    scanf("%d", &rows);

    if (printDiamond(rows)) {
        printf("Diamond printed successfully.\n");
    }

    return 0;
}

