#include <stdio.h>

int main() {
    float cocoon, renditta, price, wage;
    float rawSilk, grossRevenue, wageCost, netMargin;

    printf("Enter cocoon input in kg: ");
    scanf("%f", &cocoon);

    printf("Enter renditta: ");
    scanf("%f", &renditta);

    printf("Enter price per kg of raw silk: ");
    scanf("%f", &price);

    printf("Enter wage cost per kg of cocoon: ");
    scanf("%f", &wage);

    rawSilk = cocoon / renditta;
    grossRevenue = rawSilk * price;
    wageCost = cocoon * wage;
    netMargin = grossRevenue - wageCost;

    printf("Raw silk (kg): %.2f\n", rawSilk);
    printf("Gross revenue (Rs): %.2f\n", grossRevenue);
    printf("Wage cost (Rs): %.2f\n", wageCost);
    printf("Net margin (Rs): %.2f\n", netMargin);

    return 0;
}