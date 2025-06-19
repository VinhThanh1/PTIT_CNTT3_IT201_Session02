//
// Created by Thanh on 6/19/2025.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;


    do {
        printf("Nhap so phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    int* arr = (int*)malloc(n * sizeof(int));
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int pos;
    do {
        printf("Nhap vi tri muon xoa (0 <= pos < %d): ", n);
        scanf("%d", &pos);
    } while (pos < 0 || pos >= n);

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Mang sau khi xoa:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

