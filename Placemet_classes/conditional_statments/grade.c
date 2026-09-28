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