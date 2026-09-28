Problem Statement:
A dairy cooperative grades every incoming milk can on its fat percentage and pays a rate per litre 
based on the grade. A reading below 3.0 is rejected outright. From 3.0 up to but not including 3.5 
is Grade C at Rs 33 per litre. From 3.5 up to and including 4.0 is Grade B at Rs 38 per litre. 
Anything above 4.0 is Grade A at Rs 42 per litre.
Given the fat percentage as a decimal, print the grade. When the can is accepted, also print the 
rate for that grade. When it is rejected, print the rejection and nothing else.
Examples:
Example 1. A reading of 2.90. Below 3.0, so the can is rejected. The output is one line, Grade: 
REJECTED, and no rate line, because a rejected can is not paid for.
Example 2. A reading of 3.45. This is the case the written rules leave open. It is not rejected and it 
is not yet 3.5, so it is Grade C at Rs 33.
Example 3. A reading of 4.00. Exactly 4.0 is the top of the Grade B band, not the bottom of Grade 
A, so this is Grade B at Rs 38. A reading of 4.01 would be Grade A.
  ------------------------------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
int main() {
  float grade;
  printf("Enter the grade:\n");
  scanf("%f",&grade);
  
  if(grade<3.0){
    printf("rejected");
  }
  else if(grade>=3.0 && grade <3.5){
    printf("Grade C");
    printf("Rate:33");
  }
  else if(grade >=3.5 && grade <=4.0){
    printf("Grade B");
    printf("Rate:38");
  }
  else{
    printf("Grade A");
    printf("Rate:42");
  }
  return 0;
}
