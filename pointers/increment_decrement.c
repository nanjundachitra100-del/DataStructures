#include<stdio.h>

int main(){
    int arr[]={10,20,30,40,50};
    int *p=&arr;

    printf("%d\n",*(p++)); //10
    printf("%d\n",*p); //20
    printf("%d\n",++(*p)); //21
    printf("%d\n",*(--p)); //10
    printf("%d\n",*(p--)); //10
    
}