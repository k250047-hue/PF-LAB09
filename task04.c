#include <stdio.h>

float calculateShipping(float amount, float weight) {
    float totalCost = amount;

    if (amount > 100) {
        totalCost = amount;
    } else {
        if (weight < 2)
            totalCost = amount + 10;
        else if (weight >= 2 && weight <= 5)
            totalCost = amount + 15;
        else
            totalCost = amount + 20;
    }
	
    return totalCost;
}

int main() {
    float orderAmount, weight, total;
    printf("Enter order amount: ");
    scanf("%f", &orderAmount);
    printf("Enter package weight (kg): ");
    scanf("%f", &weight);

    total = calculateShipping(orderAmount, weight);

    printf("Total cost: %.2f\n", total);

    return 0;
}
