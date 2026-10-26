#include<stdio.h>

int main(){
    int load,empty,rate,netweight,net_quintals,amount;
    printf("Enter the load weight\n");
    scanf("%d",&load);
    printf("Enter the empty weight\n");
    scanf("%d",&empty);
    printf("Enter the rate\n");
    scanf("%d",&rate);

    netweight=load-empty;
    net_quintals=netweight/100;
    amount=net_quintals*rate;

    printf("netweight:%d\n",netweight);
    printf("Net_quintals:%d\n",net_quintals);
    printf("Amount:%d\n",amount);

    return 0;
}