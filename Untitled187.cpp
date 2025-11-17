#include <stdio.h> 

int main() {
    int mangCuaToi[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(mangCuaToi) / sizeof(mangCuaToi[0]);

    printf("Mang truoc khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mangCuaToi[i]);
    }
    printf("\n");

    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mangCuaToi[i]);
    }
    printf("\n");

    return 0;
}
