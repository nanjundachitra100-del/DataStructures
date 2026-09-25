#include<stdio.h>
#include<string.h>
 int main(){
    char a[100],b[100],result[100];
    printf("Enter the 1 st string");
    scanf("%s",a);
    printf("Enter the 2nd string");
    scanf("%s",b);

    int lenA=strlen(a);
    int lenB  = strlen(b);
    int i=lenA -1;
    int j=lenB-1;
    int carry =0;
    int k=0;
    while (i>=0||j>=0||carry)
    {
       int digitA = (i>=0)?(a[i] - '0'):0;
        int digitB=(j>0)?(a[i] - '0'):0;
        int sum = digitA + digitB +carry;
        result[k++]=(sum%10)+'0';
        carry = sum/10;
        i--;
        j--;

 }
 for(int x=0;x<k/2;x++){
    char temp = result[x];
    result[x]=result[k-1-x];
    result[k-1-x]=temp;
 }
 result[k]='\0';
 printf("%s \n",result);

 return 0;
}
