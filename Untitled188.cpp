#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];
    char reverseString[100];
    char *ptrInput, *ptrReverse;
    int length, i;

    printf("Nhap mot chuoi: ");
    gets(inputString);

    length = strlen(inputString);
    ptrInput = inputString;
    ptrReverse = reverseString;
    ptrInput += (length - 1);

    for (i = 0; i < length; i++) {
        *ptrReverse = *ptrInput;
        ptrReverse++;
        ptrInput--;
    }
    *ptrReverse = '\0';

    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}
