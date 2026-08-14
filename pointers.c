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

//2.program 2-(based on the size)
#include<stdio.h>
int main(){
  int *p;
  float *q;
  char *r;
  printf("size of the int address %zu\n",sizeof(*p)); //so here based on the pc configuration the value of the address will be same,
  like if it is a 32 bit computer then 4 bytes and if 64 bits then 8 bytes.
  printf("size of the float address %zu\n",sizeof(*q));
  printf("size of the char address %zu\n",sizeof(*r));
  return 0;
}
