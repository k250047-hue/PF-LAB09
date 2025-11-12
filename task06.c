#include <stdio.h>

float tax(float income) {
    if (income <= 20000)
        return 0;
    else if (income <= 50000)
        return (income - 20000) * 0.10;
    else
        return (50000 - 20000) * 0.10 + (income - 50000) * 0.20;
}

int main() {
    float income, totalTax;
    printf("Enter gross income: ");
    scanf("%f", &income);
    totalTax = tax(income);
    printf("Total tax: %.2f\n", totalTax);
    return 0;
}
