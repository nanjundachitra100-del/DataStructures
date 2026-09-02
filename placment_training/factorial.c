#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the n value: ");
    scanf("%d",&n);

    pritf("Factorial =");
    for(int i=0;i<n;i++){
        fact=fact*i;
    }
    printf("%d", fact);


}