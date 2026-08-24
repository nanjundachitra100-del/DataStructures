
#include<stdio.h>
int main(){
  int *p;
  float *q;
  char *r;
  printf("size of the int address %zu\n",sizeof(*p)); //so here based on the pc configuration the value of the address will be same,
  //like if it is a 32 bit computer then 4 bytes and if 64 bits then 8 bytes.
  printf("size of the float address %zu\n",sizeof(*q));
  printf("size of the char address %zu\n",sizeof(*r));
  return 0;
}