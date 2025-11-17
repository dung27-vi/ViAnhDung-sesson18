#include <stdio.h>

void xoaPhanTu(int *arr, int index, int *n) {
    if (index < 0 || index >= *n) {
        printf("Vi tri xoa khong hop le.\n");
        return;
    }

    for (int i = index; i < *n - 1; i++) {
        *(arr + i) = *(arr + i + 1);
    }

    (*n)--;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int viTriCanXoa = 2;

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    xoaPhanTu(arr, viTriCanXoa, &n);

    printf("Mang sau khi xoa phan tu tai vi tri %d: ", viTriCanXoa);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
