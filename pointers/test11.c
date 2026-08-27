#include <stdio.h>

void safeprint(const void *ptr, int type);

int main() {
    int intarray[5];
    float floatarray[5];

    int *ip = intarray;
    float *fp = floatarray;

    int i, option, index;

    printf("Enter the integer values:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", ip + i);
    }

    printf("Enter the floating values:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", fp + i);   // FIXED
    }

    printf("\nInteger array elements are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(ip + i));
    }

    printf("\nFloating array elements are:\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", *(fp + i));
    }

    printf("\n\nEnter 0 for integers and 1 for floats: ");
    scanf("%d", &option);       // FIXED

    printf("Enter the index: ");
    scanf("%d", &index);        // FIXED

    if (option == 0) {
        if (index >= 0 && index < 5) {
            safeprint(ip + index, 0);
        } else {
            safeprint(NULL, 0);
        }
    }
    else if (option == 1) {
        if (index >= 0 && index < 5) {
            safeprint(fp + index, 1);   // FIXED
        } else {
            safeprint(NULL, 1);
        }
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}

void safeprint(const void *ptr, int type) {
    if (ptr == NULL) {
        printf("Invalid, nothing to print\n");
        return;
    }

    if (type == 0) {
        printf("Integer value = %d\n", *(const int *)ptr);
    }
    else if (type == 1) {
        printf("Float value = %.2f\n", *(const float *)ptr);
    }
    else {
        printf("Invalid type\n");
    }
}