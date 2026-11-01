
Write a C program to read 10 integers and 10 floating-point values into separate arrays.
Using pointer arithmetic only, print each element along with its memory address;
array indexing is not allowed. Implement safePrint(void *ptr, int type) to display a value based 
on its type (0 for integer and 1 for float) and handle NULL pointers. In main(), allow the user to select the type,
enter a corresponding value, and demonstrate safePrint() and NULL-pointer handling.
    
Constraints:
-100000 ≤ Integer values ≤ 100000
-100000.0 ≤ Floating-point values ≤ 100000.0

#include <stdio.h>

void safePrint(void *ptr, int type)
{
    if (ptr == NULL)
    {
        printf("NULL pointer detected!\n");
        return;
    }

    if (type == 0)
    {
        printf("Integer value: %d\n", *(int *)ptr);
    }
    else if (type == 1)
    {
        printf("Float value: %.2f\n", *(float *)ptr);
    }
    else
    {
        printf("Invalid type!\n");
    }
}

int main()
{
    int a[10];
    float b[10];

    int *ip = a;
    float *fp = b;

    int i, choice;

    printf("Enter 10 integer values:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", ip + i);
    }

    printf("\nEnter 10 floating-point values:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%f", fp + i);
    }

    printf("\nInteger array elements and addresses:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Value: %d  Address: %p\n", *(ip + i), (void *)(ip + i));
    }

    printf("\nFloat array elements and addresses:\n");

    for (i = 0; i < 10; i++)
    {
        printf("Value: %.2f  Address: %p\n", *(fp + i), (void *)(fp + i));
    }

    printf("\nSelect type:\n");
    printf("0 - Integer\n");
    printf("1 - Float\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 0)
    {
        int value;

        printf("Enter an integer value: ");
        scanf("%d", &value);

        safePrint(&value, 0);
    }
    else if (choice == 1)
    {
        float value;

        printf("Enter a floating-point value: ");
        scanf("%f", &value);

        safePrint(&value, 1);
    }
    else
    {
        printf("Invalid choice!\n");
    }

    printf("\nDemonstrating NULL pointer handling:\n");

    safePrint(NULL, 0);
    safePrint(NULL, 1);

    return 0;
}
