#include<stdio.h>

int main(){
    int n,rev=0,rem;
    printf("Enter the n value: \n");
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        rev=n*10+rem;
        n=n/10;
    }
    printf("Reverse :%d",rev);


    return 0;
}