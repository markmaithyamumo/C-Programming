#include <stdio.h>

int main() {
    int occupancy[5][10];
    int i, j;
    int occupied, vacant;

    
    for (i = 0; i < 5; i++) {
        printf("\nEnter occupancy for Floor %d (1 = occupied, 0 = vacant):\n", i + 1);

        for (j = 0; j < 10; j++) {
            printf("Room %d: ", j + 1);
            scanf("%d", &occupancy[i][j]);
        }
    }

   
    for (i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1) {
                occupied++;
            } else if (occupancy[i][j] == 0) {
                vacant++;
            }
        }

        printf("\nFloor %d:\n", i + 1);
        printf("Occupied rooms: %d\n", occupied);
        printf("Vacant rooms: %d\n", vacant);
    }

    return 0;
}
