#include<stdio.h>

int main(){
    int i,n,sum=0;
    printf("Enter the n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=sum+i;
        printf("sum of n numbers is %d",sum);

    }
    return 0;
}