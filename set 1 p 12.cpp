#include <stdio.h>

void print_HalfDiamond(int cols) {
    for (int i = 1; i <= cols; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = cols - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int cols;

    scanf("%d", &cols);
    
    print_HalfDiamond(cols);
    
    return 0;
}

