#include <stdio.h>

int main(){
   int axel,rate,single_journey,return_journey,savings;
   printf("Enter the axel weight\n");
   scanf("%d",&axel); 
   printf("Enter rate\n");
   scanf("%d",&rate);
   single_journey=axel*rate;
   return_journey=single_journey*1.5;
   savings=return_journey-2*single_journey;

   printf("Single journey:%d\n",single_journey);
   printf("Return_journey:%d\n",return_journey);
   printf("Savings:%d\n",savings);


}
