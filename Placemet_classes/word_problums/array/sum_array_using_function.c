#include<stdio.h>
int readInt(void);
void input(int n, int arr[]);
int sum(int n, int arr[]);
double average(int n, int arr[]);
void output(int total, double avg);

int readInt(void){
  int n;
  scanf("%d",&n);
  return n;
}
void input(int n, int arr[]){
  for(int i=0;i<ni++){
    scanf("%d",&arr[i]);
  }
}
int sum(int n,int arr[]){
  int total=0;
  for(int i=0;i<n;i++){
    total=total+arr[i];
  }
  return total;
}
double average(int n, int arr[]){
  int total;
  total=sum(n,arr);
  return double(total)/n;
}
void output(int total, double avg){
  printf("sum:%d\n",total);
  printf("Average:%d\n",avg);
}

int main(){
  int n;
  int arr[1000];
  int total;
  double avg;
  n=readInt();
  
    input(n, arr);

    total = sum(n, arr);

    avg = average(n, arr);

    output(total, avg);
  
  return 0;
}