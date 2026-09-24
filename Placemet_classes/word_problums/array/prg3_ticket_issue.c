#include<stdio.h>

int main(){
    int n,s,busiest=0;
    int count[20]={0};
    printf("Enter the size\n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&s);
        count[s]++;
    }
    for(s=1;s<=20;s++){
        if(count[s]>0){
            printf("Stage %d: %d\n",s,count[s]);
            if(busiest == 0 || count[s] > count >count [busiest]){
                busiest=s;
            }
        }
    }
    if(busiest==0){
        printf("no ticket\n");
    }else{
        printf("Busiest stage:%d\n",busiest);
    }


    return 0;
}