#include <stdio.h>

float calculateBill(float foodCost, int people) {
    float tax, tip, service, total;

    tax = 0.08 * foodCost;

    if (foodCost > 50)
        tip = 0.15 * foodCost;
    else
        tip = 0.10 * foodCost;

    if (people > 6)
        service = 0.05 * foodCost;
    else
        service = 0;

    total = foodCost + tax + tip + service;
    return total;
}

int main() {
    float foodCost, total;
    int people;

    printf("Enter food cost: ");
    scanf("%f", &foodCost);
    printf("Enter number of people: ");
    scanf("%d", &people);

    total = calculateBill(foodCost, people);

    printf("Total bill: %.2f\n", total);

    return 0;
}
