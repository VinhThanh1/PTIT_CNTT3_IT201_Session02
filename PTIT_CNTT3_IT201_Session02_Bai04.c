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

    int pos, newValue;
    do {
        printf("Nhap vi tri muon sua (0 <= pos < %d): ", n);
        scanf("%d", &pos);
    } while (pos < 0 || pos >= n);

    printf("Nhap gia tri moi tai vi tri %d: ", pos);
    scanf("%d", &newValue);

    arr[pos] = newValue;

    printf("Mang sau khi cap nhat:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
