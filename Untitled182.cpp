#include <stdio.h>

void swap(int* ptrA, int* ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int a = 18;
    int b = 36;

    printf("Gia tri ban dau: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("Gia tri sau khi hoan doi: a = %d, b = %d\n", a, b);

    return 0;
}
