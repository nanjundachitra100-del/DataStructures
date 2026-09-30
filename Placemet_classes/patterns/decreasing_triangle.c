int main() {
  int i,j;
  for(i=1;i<=5;i++){
    for(j=6;j>=i-1;j--){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}