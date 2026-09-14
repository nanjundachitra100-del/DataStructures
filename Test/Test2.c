#include <stdio.h>
#include <stdlib.h>

/* Function Prototypes */
int *allocateUsingMalloc(int n);
int *allocateUsingCalloc(int n);
int *resizeArray(int *arr, int newSize);
void readElements(int *arr, int start, int end);
void printArray(int *arr, int n);
void freeMemory(int *arr);

int main()
{
    int n, new_n;
    int *mallocArray;
    int *callocArray;
    int *resizedArray;

    printf("Enter array size \n");
    if(scanf("%d",&n)!= || n <=0){
        printf("Invalid array size\n");
        return 1;
    }

    mallocArray=allocateUsingMalloc(n);

    if(mallocArray == NULL){
        printf("Memory allocation failed using malloc\n");
        return 1;
    }
    printf("Memory allocated successfuly\n");

    return 0;
}

int *allocateUsingMalloc(int n)
{
    return NULL;
}

int *allocateUsingCalloc(int n)
{
    return NULL;
}

int *resizeArray(int *arr, int newSize)
{
    return NULL;
}

void readElements(int *arr, int start, int end)
{
    
}

void printArray(int *arr, int n)
{
    
}

void freeMemory(int *arr)
{
    
}




