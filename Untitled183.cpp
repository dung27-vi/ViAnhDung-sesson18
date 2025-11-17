#include <stdio.h>

void calculateSum(int *num1, int *num2, int *result);

int main() {
    int a = 10;
    int b = 20;
    int sum;

    calculateSum(&a, &b, &sum);

    printf("Tong cua %d va %d la: %d\n", a, b, sum);

    return 0;
}

void calculateSum(int *num1, int *num2, int *result) {
    *result = *num1 + *num2;
}
