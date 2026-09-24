#include <stdio.h>

int main(){

    int n, mismatch=0, total=0;

    printf("Enter the n:\n");
    scanf("%d",&n);

    int opening[n], closing[n], issued[n], diff[n];

    printf("Enter the opening array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&opening[i]);
    }

    printf("Enter the closing array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&closing[i]);
    }

    printf("Enter the issued array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&issued[i]);
    }

    for(int i=0;i<n;i++){

        diff[i] = closing[i] - (opening[i] - issued[i]);

        if(diff[i] != 0){

            mismatch++;

            if(diff[i] < 0){
                total += -diff[i];
            }
            else{
                total += diff[i];
            }
        }
    }

    if(mismatch == 0){

        printf("Reconciled\n");

    }
    else{

        for(int i=0;i<n;i++){
            printf("Item %d: discrepancy %d\n",i+1,diff[i]);
        }

        printf("Mismatches: %d\n",mismatch);
        printf("Total absolute discrepancy: %d\n",total);
    }

    return 0;
}