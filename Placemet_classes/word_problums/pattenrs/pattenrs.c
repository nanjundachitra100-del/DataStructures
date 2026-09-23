#include <stdio.h>

int main() {

    int n;

    printf("Enter the no. of rows: ");
    scanf("%d", &n);

    // Upper part
    for(int i = 1; i <= n; i++) {

        // spaces
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }

        // dots
        for(int j = 1; j <= 2*i-1; j++) {
            printf(".");
        }

        printf("\n");
    }

    // Lower part
    for(int i = n-1; i >= 1; i--) {

        // spaces
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }

        // dots
        for(int j = 1; j <= 2*i-1; j++) {
            printf(".");
        }

        printf("\n");
    }

    return 0;
}