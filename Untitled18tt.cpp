#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void displayMenu() {
    printf("\n--- QUAN LY DANH SACH SO NGUYEN ---\n");
    printf("\n 1. Them phan tu vao vi tri bat ky\n");
    printf("\n 2. Xoa phan tu o vi tri bat ky\n");
    printf("\n 3. Cap nhat gia tri tai vi tri bat ky\n");
    printf("\n 4. Hien thi mang\n");
    printf("\n 5. Thoat chuong trinh\n");
    printf("\n---------------------------------------\n");
    printf("\n Chon chuc nang: ");
}

void displayArray(int *arr, int size) {
    if (size == 0) {
        printf("Mang rong.\n");
        return;
    }
    printf("Mang hien tai: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void insertElement(int *arr, int *size, int element, int position) {
    if (*size >= MAX_SIZE) {
        printf("Mang da day, khong the them.\n");
        return;
    }
    if (position < 0 || position > *size) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    for (int i = *size - 1; i >= position; i--) {
        *(arr + i + 1) = *(arr + i);
    }
    *(arr + position) = element;
    (*size)++;
    printf("Da them phan tu.\n");
}

void deleteElement(int *arr, int *size, int position) {
    if (*size == 0) {
        printf("Mang rong, khong the xoa.\n");
        return;
    }
    if (position < 0 || position >= *size) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    for (int i = position; i < *size - 1; i++) {
        *(arr + i) = *(arr + i + 1);
    }
    (*size)--;
    printf("Da xoa phan tu.\n");
}

void updateElement(int *arr, int size, int element, int position) {
    if (position < 0 || position >= size) {
        printf("Vi tri khong hop le.\n");
        return;
    }
    *(arr + position) = element;
    printf("Da cap nhat gia tri.\n");
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position;

    while (1) {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap phan tu can them: ");
                scanf("%d", &element);
                printf("Nhap vi tri can them (0 den %d): ", size);
                scanf("%d", &position);
                insertElement(arr, &size, element, position);
                break;
            case 2:
                printf("Nhap vi tri can xoa (0 den %d): ", size - 1);
                scanf("%d", &position);
                deleteElement(arr, &size, position);
                break;
            case 3:
                printf("Nhap vi tri can cap nhat (0 den %d): ", size - 1);
                scanf("%d", &position);
                printf("Nhap gia tri moi: ");
                scanf("%d", &element);
                updateElement(arr, size, element, position);
                break;
            case 4:
                displayArray(arr, size);
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                exit(0);
            default:
                printf("Chuc nang khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}
