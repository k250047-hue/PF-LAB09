#include <stdio.h>

void processTransaction(float remainingLimit, float amount) {
    if (amount <= remainingLimit) {
        remainingLimit-=amount; 
        printf("Transaction APPROVED\n");
        printf("Remaining limit: %.2f\n", remainingLimit);
    } else {
        printf("Transaction DECLINED\n");
        printf("Remaining limit: %.2f\n", remainingLimit);
    }
}

int main() {
    float limit = 5000, amount;
    printf("Enter transaction amount: ");
    scanf("%f", &amount);

    processTransaction(limit, amount);

    return 0;
}
