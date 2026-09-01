#include <stdio.h>
int main(){
int i,n,isprime=1;
printf("Enter the n:\n");
scanf("%d",&n);
 if(n<1){
    isprime=0;
 }

 for(i=2;i<n/2;i++){
    if(n%2==0){
        isprime=0;
        break;
    }
 }
 if(isprime==1){
    printf("The number is prime:\n");
 }else{
    printf("The number is not prime:\n");
 }


}