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

//3.program 3-(Based on the increment and decrement)
#include <stdio.h>
3	
4	int main() {
5	    int arr[] = {10, 20, 30, 40, 50,5};
6	  
7	    int *p,*q;
8	    p=arr;
9	    printf("%d\n",*p);
10	    printf("%d %d %d\n",(*p)++,*p++,*++p);
11	    q=p+3;
12	    printf("%d",*q-3);
13	 
14	    return 0;
15	}
  OUTPUT=10
         30 20 20
          2


  //4.program-4[swap 2 numbers]
  #include <stdio.h>

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After: x = %d, y = %d\n", x, y);

    return 0;
}
OUTPUT:a   = 100
↑
p   = address of a
↑
q   = address of p
