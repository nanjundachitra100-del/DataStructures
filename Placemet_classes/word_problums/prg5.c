Q:Problem Statement:
A toll booth charges per axle. Given the number of axles on a vehicle and the rate charged per 
axle in rupees, compute the single-journey toll. A return pass costs 1.5 times the single toll. Print 
the single toll, the return pass price, and the saving compared with buying two single tolls.
Examples:
Example 1. A 2-axle car at Rs 130 per axle pays Rs 260 for a single journey. A return pass costs 
1.5 times that, which is Rs 390.00. Two single tolls would cost Rs 520.00, so the saving is Rs 
130.00.
Example 2. A 1-axle vehicle at Rs 75 per axle pays Rs 75. The return pass is Rs 112.50 and the 
saving is Rs 37.50. This is the case that matters: the single toll is an odd whole number, and the 
answer has a half rupee in it. If the multiplier had been written as 3 / 2 the answer would be Rs 
75.00, because 3 / 2 in integer arithmetic is 1.
Example 3. A vehicle recorded with 0 axles at Rs 130 per axle pays Rs 0, the return pass is Rs 
0.00, and the saving is Rs 0.00. The program must not crash or print anything unusual.
-----------------------------------------------------------------------------------------------------------------------------------------------
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
