#include <stdio.h>

int main() {
    int grid[3][4], i, j;
    int *p = &grid[0][0];
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            grid[i][j] = i * 4 + j + 1;

    printf("Element at start pointer: %d\n", *p);
    printf("Accessing with pointer +5: %d\n", *(p + 5));

    int *q = &grid[1][0];
    printf("From second row using positive index +2: %d\n", *(q + 2));
    printf("From same using negative index -1: %d\n", *(q - 1));

    printf("Numbers divisible by 3: ");
    for (i = 0; i < 12; i++) {
        if (*(p + i) % 3 == 0)
            printf("%d ", *(p + i));
    }

    printf("\nLast element: %d\n", *(&grid[0][0] + 11));
    return 0;
}