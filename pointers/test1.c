#include<stdio.h>
void safeprint(void * ptr,int type){
    if(ptr==NULL){
        printf("\n NOthing to print");
        return ;
    }

    else if(type==0){
        printf("\n The value is %d at the adress %p",*(int *)(ptr),(void *)ptr);
    }

    else if(type==1){
        printf("\n The value is %f at the adress %p",*(float *)(ptr),(void *)ptr);
    }

    else{
        printf("invalid type");
    }

}
int main(){
    int iarr[10];
    float farr[10];

    int * ip=iarr;
    float *fp=farr;

    printf("\n Enter the elements of integer array");
    for(int i=0;i<10;i++){
        scanf("%d",(ip+i));
    }

    printf("\n The elements of integer array are ");
    for(int i=0;i<10;i++){
        printf(" \n The value is %d at the adress %p",*(ip+i),(void *)(ip+i));  
    }

    printf("\n Enter the elemnts of float array");
    for(int i=0;i<10;i++){
        scanf("%f",(fp+i));
    }

    printf("\n The elements of float array are ");
    for(int i=0;i<10;i++){
        printf(" \n The value is %.2f at the adress %p",*(ip+i),(void *)(ip+i));  
    }

    int iv,type;
    float fv;

    int * ivp=&iv;
    float * fvp=&fv;

    printf("\n Enter the type 0  for integer and 1 for float");
    scanf("%d",&type);

    if(type==0)
    {
    printf("\n Enter the integer value");
    scanf("%d",&iv);
    safeprint(ivp,type);

    }

    else if(type==1){
    printf("\n Enter the float value");
    scanf("%d",&fv);
    safeprint(fvp,type);
    }

    else 
    printf("\n Invalid type");

    safeprint(NULL,type);

    return 0;
}