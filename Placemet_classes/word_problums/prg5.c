#include <stdio.h>
int main() {
  int no_of_axeles,rate,single_journey,return_toll,savings;
  
  printf("Enter the no_of_axeles:\n");
  scanf("%d",&no_of_axeles);
  printf("Enter the rate:\n");
  scanf("%d",&rate);
  
  single_journey=rate*no_of_axeles;
  return_toll=1.5*single_journey;
  
  savings=(2*single_journey)-return_toll;
  
  printf("%d is the return toll",return_toll);

  return 0;
}
