#include <stdio.h>

float rentalCost(int days, float km) {
    float base = 40 * days;
    float limit = 100 * days;
    float extra = 0;
    if (km > limit)
        extra = (km - limit) * 0.25;
    float total = base + extra;
    if (days >= 7)
        total = total - (total * 0.10);
    return total;
}

int main() {
    int days;
    float km;
    printf("Enter rental days: ");
    scanf("%d", &days);
    printf("Enter kilometers driven: ");
    scanf("%f", &km);
    float cost = rentalCost(days, km);
    printf("Final rental cost: $%.2f\n", cost);
    return 0;
}