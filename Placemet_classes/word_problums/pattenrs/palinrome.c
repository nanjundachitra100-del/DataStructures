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
        printf("The given number is a plaindrom");
    }
    else{
        printf("The given number is not a palindrome");
    }
    return 0; 
 }