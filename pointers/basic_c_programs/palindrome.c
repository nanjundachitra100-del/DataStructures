#include<stdio.h>
int main (){
    int n,original,rev=0,rem;
    printf("Enter the n value:\n");
    scanf("%d\n",&n);

    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        
    }
    if(original==rev){
        printf("palindrome");
    }
    else{
        printf("Not a palindrome");
    }

    return 0;
}