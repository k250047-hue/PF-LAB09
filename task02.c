#include <stdio.h>


void checkResult(float m1, float m2, float m3) {
    float avg = (m1 + m2 + m3) / 3;

    if (avg >= 50 && m1 >= 40 && m2 >= 40 && m3 >= 40) {
        printf("Average: %.2f\n", avg);
        printf("PASS\n");
    } else {
        printf("Average: %.2f\n", avg);
        printf("FAIL\n");

        if (avg < 50)
            printf("Average below 50\n");
        if (m1 < 40 || m2 < 40 || m3 < 40)
            printf("One or more subjects below 40\n");
    }
}

int main() {
    float m1, m2, m3;

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    checkResult(m1, m2, m3);

    return 0;
}
