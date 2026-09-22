#include <stdio.h>

int main() {
    float fat;
    int grade;

    printf("Enter the fat percentage: ");
    scanf("%f", &fat);

    if (fat < 3.0) {
        printf("Grade: Rejected\n");
        printf("Rate: 33\n");
        printf("Amount to pay: %.2f\n", 33 * fat);
    }
    else if (fat <= 4.0) {
        printf("Grade: B\n");
        printf("Rate: 38\n");
        printf("Amount to pay: %.2f\n", 38 * fat);
    }
    else {
        printf("Grade: A\n");
        printf("Rate: 42\n");
        printf("Amount to pay: %.2f\n", 42 * fat);
    }

    return 0;
}