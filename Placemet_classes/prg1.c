
#include <stdio.h>

int main() {
    int loadDW, emptyW;
    float ratePerq;

    printf("Enter the loaded weight in kg: ");
    scanf("%d", &loadDW);

    printf("Enter the empty weight in kg: ");
    scanf("%d", &emptyW);

    printf("Enter the rate per quintal: ");
    scanf("%f", &ratePerq);

    int net = loadDW - emptyW;
    float netQ = net / 100.0;
    float amount = netQ * ratePerq;

    printf("Net weight in KG: %d\n", net);
    printf("Net weight in quintal: %.2f\n", netQ);
    printf("Amount: %.2f\n", amount);

    return 0;
}

