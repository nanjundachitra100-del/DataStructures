#include <stdio.h>
#include <stdlib.h>


int SequentialSearch(int *arr, int n, int target);

int main(){
    int n,target;
    printf("Enter the number of elements :\n");
    scanf("%d",&n);

    int *arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory a;location failed\n");
        return 1;
    }
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the target to search:\n");
    scanf("%d",&target);

    int result=SequentialSearch(arr,n,target);
    printf("%d",result);
    free(arr);
    return 0;
}
int SequentialSearch(int *arr,int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
        
    }
    return -1;
}
