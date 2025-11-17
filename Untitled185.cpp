#include <stdio.h>

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int kichThuoc = sizeof(mang) / sizeof(mang[0]);
    int viTriCapNhat = 2;
    int giaTriMoi = 99;

    printf("Mang ban dau: ");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    printf("Mang sau khi cap nhat phan tu tai vi tri %d thanh %d: ");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}
