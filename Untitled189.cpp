#include <stdio.h>
#include <stdlib.h>

int* addElement(int* originalArr, int* size, int newValue, int position) {
    (*size)++; 
    int* newArr = (int*)realloc(originalArr, (*size) * sizeof(int)); 
    if (newArr == NULL) {
        printf("Loi cap phat bo nho.\n");
        exit(1);
    }
    for (int i = *size - 1; i > position; i--) {
        newArr[i] = newArr[i - 1]; 
    }
    newArr[position] = newValue; 
    return newArr;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    int newValue = 25;
    int position = 2; 
    int *newArr;

    newArr = addElement(arr, &n, newValue, position);

    printf("Mang moi sau khi them phan tu: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", newArr[i]); 
    }
    printf("\n");

    free(newArr);
    return 0;
}
