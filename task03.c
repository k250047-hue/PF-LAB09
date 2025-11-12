#include <stdio.h>


void checkTemperature(float temp) {
    if (temp > 35)
        printf("Code 1: HEAT ALERT!\n");
    else if (temp < 10)
        printf("Code 2: COLD ALERT!\n");
    else if (temp >= 15 && temp <= 25)
        printf("Code 3: COMFORT ZONE\n");
    else
        printf("Code 4: NORMAL CONDITIONS\n");
}

int main() {
    float temp;

    printf("Enter room temperature in Celsius: ");
    scanf("%f", &temp);

    checkTemperature(temp);

    return 0;
}
