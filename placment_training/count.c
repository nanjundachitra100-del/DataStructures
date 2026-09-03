#include<stdio.h>

int main(){
    int i,count=0,n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);

    while(n!=0){
        n=n/10;
        count++;
    }
    printf("The number of digits in the given number is %d",count);
    return 0;
}