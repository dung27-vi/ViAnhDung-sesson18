#include <stdio.h>

int find_element(int *arr_ptr, int n, int target_val) {
    for (int i = 0; i < n; i++) {
        if (*(arr_ptr + i) == target_val) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int target = 7;
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = find_element(arr, size, target);

    if (index != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", target, index);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", target);
    }

    return 0;
}
