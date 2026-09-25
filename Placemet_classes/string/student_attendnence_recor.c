#include<stdio.H>
#include<string.h>
 int main(){
    char s[100],n;
    printf("enter the string");
    scanf("%d",&s);
    int absentcount=0;
    int consecutivelate=0;
    int maxconsecutivelate=0;
    for(int i=0;i<n;i++){
        if (s[i]=='A'){
            absentcount++;
            consecutivelate=0;
        }else if(s[i]=='L'){
            consecutivelate++;
            if(consecutivelate>  maxconsecutivelate){
               maxconsecutivelate=consecutivelate;
            }
            else{
                consecutivelate=0;
            }
        }
    
 }
 if(absentcount <2 &&   maxconsecutivelate<3){
    printf("True\n");

 }else{
    printf("invalid");
 }
return 0;
 }