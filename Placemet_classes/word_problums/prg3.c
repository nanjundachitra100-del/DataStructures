#include <stdio.h>

int main (){
    int axels,rate;
    float singlepass,returnpass,savings;

    printf("Enter the axels and rate");
    scanf("%d %d",&axels,&rate);

    singlepass=axels * rate;
    returnpass=1.5 * singlepass;

    savings=2 * singlepass -returnpass;

    printf("savings is %2.f",savings);

}