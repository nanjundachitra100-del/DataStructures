#include<stdio.h>

int main(){
  int arr[]={10,20,30,40,50};
  int *p=&arr;
  for (int i=0;i<5;i++)
  {
    printf("%d\n",*(arr+i));//10
    printf("%d\n",(arr+i)); //address 
    printf("%d\n",*(arr+1)); //*(1000+1*4)=*(1004)=20
      }
    
 return 0;
}
