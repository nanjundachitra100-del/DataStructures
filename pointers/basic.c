#include<stdio.h>
int main(){
int a=10,b=20;
int *p=&a;
int *q=&b;
printf("%d ",a); //10
printf("%d ",b); //20
printf("%d ",*p); //10
printf("%d ",*q); //20
printf("%d ",p); //gives the address of the operator
return 0;
}