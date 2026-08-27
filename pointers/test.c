#include <stdio.h>

void readArray(int *arr, int size)
{
    int *p = arr;

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", p);
        p++;
    }
}

void printArray(int *arr, int size)
{
    int *p = arr;

    printf("\nArray elements and addresses:\n");

    for (int i = 0; i < size; i++)
    {
        printf("Value = %d, Address = %p\n", *p, (void *)p);
        p++;
    }
}

void reverseArray(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int *findMax(int *arr, int size)
{
    int *max = arr;
    int *p = arr + 1;

    while (p < arr + size)
    {
        if (*p > *max)
        {
            max = p;
        }

        p++;
    }

    return max;
}

void swapElements(int *arr, int pos1, int pos2)
{
    int *p1 = arr + pos1;
    int *p2 = arr + pos2;
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int arr[5];
    int *max;

    readArray(arr, 5);

    printf("\nOriginal Array:\n");
    printArray(arr, 5);

    reverseArray(arr, 5);

    printf("\nReversed Array:\n");
    printArray(arr, 5);

    max = findMax(arr, 5);

    printf("\nMaximum value = %d\n", *max);
    printf("Maximum address = %p\n", (void *)max);

    swapElements(arr, 0, 4);

    printf("\nAfter swapping position 0 and position 4:\n");
    printArray(arr, 5);

    return 0;
}