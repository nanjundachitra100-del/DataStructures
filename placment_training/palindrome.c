#include<stdio.h>
int main(){
    int n,original,rem,rev=0;
    printf("Enter the n value:\n");
    scanf("%d",&n);
    original=n;

    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(original==rev){
        printf("The number is palindrome\n");
    } else {
        printf("The number is not palindrome\n");
    }
    return 0;
}