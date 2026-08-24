#include <stdio.h>

int main(){
    int a[]={10,20,30,40,50};
    int *p=&a[3];
    
    printf("%d\n",*(p-2));
    printf("%d\n",*p-2);

    return 0;

}