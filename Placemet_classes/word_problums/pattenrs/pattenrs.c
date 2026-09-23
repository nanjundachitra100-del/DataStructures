Problem Statement:
A festival stall prints dot-grid guides for rangoli designs. Given N, print a right-aligned triangle of 
dots in which row i carries i dots preceded by N minus i spaces. Then print the same triangle 
inverted directly below it, so the complete figure has 2N rows.
Examples:
Example 1. For N = 4, the upper triangle has rows of 1, 2, 3 and 4 dots, right-aligned so that all the 
rows end in the same column. The inverted triangle below repeats those rows in the opposite 
order, 4, 3, 2 and 1, giving eight rows in total with the widest two rows meeting in the middle.
Example 2. For N = 2, the figure is four rows: one dot indented by one space, two dots, two dots, 
one dot indented by one space.
Example 3. For N = 1, both triangles are a single dot with no leading spaces, so the output is two 
identical lines. There is no separator between the halves and no special case needed.


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
