#include <stdio.h>

int main() {
    int R, C;
    int arr[100][100];
    int i, j;

    int total = 0;
    int maxRackTotal = 0;
    int maxRack = 0;

    int maxTray = 0;
    int maxTrayRack = 0;
    int maxTrayPosition = 0;

    printf("Enter number of racks and trays:\n");
    scanf("%d %d", &R, &C);

    printf("Enter larvae counts:\n");

    for (i = 0; i < R; i++) {

        int rackTotal = 0;

        for (j = 0; j < C; j++) {

            scanf("%d", &arr[i][j]);

            total += arr[i][j];
            rackTotal += arr[i][j];

            if (arr[i][j] > maxTray) {
                maxTray = arr[i][j];
                maxTrayRack = i + 1;
                maxTrayPosition = j + 1;
            }
        }

        if (rackTotal > maxRackTotal) {
            maxRackTotal = rackTotal;
            maxRack = i + 1;
        }
    }

    float average = (float)total / (R * C);

    printf("\nTotal larvae = %d\n", total);
    printf("Rack with highest total = Rack %d\n", maxRack);
    printf("Highest rack total = %d\n", maxRackTotal);
    printf("Highest tray count = %d\n", maxTray);
    printf("Highest tray location = Rack %d, Tray %d\n",
           maxTrayRack, maxTrayPosition);
    printf("Average larvae per tray = %.2f\n", average);

    return 0;
}

