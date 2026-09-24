#include <stdio.h>

int main(){

    int arr[7];
    int max, min, dayMax=0, dayMin=0, total=0;
    float avg;

    for(int i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(int i=0;i<7;i++){

        if(arr[i]>max){
            max=arr[i];
            dayMax=i;
        }

        if(min>arr[i]){
            min=arr[i];
            dayMin=i;
        }

        total = total + arr[i];
    }

    avg = (float)total / 7;

    int count=0;

    for(int i=0;i<7;i++){
        if(arr[i]>avg){
            count++;
        }
    }

    printf("max: %d\n",max);
    printf("min: %d\n",min);
    printf("total: %d\n",total);
    printf("avg: %.2f\n",avg);
    printf("count above average: %d\n",count);

    return 0;
}