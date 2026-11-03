Problem Statement: Sequential Search on Dynamic Array
Write a C program that dynamically allocates an integer array of size n, reads its elements, and searches for a given target value using sequential search. 
Implement a function

 int sequentialSearch (int* arr, int n, int target)

that returns the index of the first occurrence of the target value, or -1 if the target is not found.
Constraints
1≤n≤105
−109≤Array elements, target≤109
Array must be allocated dynamically using malloc.
Must not use built-in search functions.
-------------------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>

int Sequentialsearch(int*arr,int n,int target){
    for (int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n,target;
    printf("Enter the number of elements\n");
    scanf("%d",&n);

    int *arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        return 1;
    }

    printf("Eneter the array elements\n");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("Enter the target element\n");
    scanf("%d",&target);
    int result=Sequentialsearch(arr,n,target);
    
    printf("%d",result);
    free(arr);
    arr=NULL;


    return 0;
}
