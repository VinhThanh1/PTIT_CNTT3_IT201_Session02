//
// Created by Thanh on 6/17/2025.
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

    int maxNumber = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNumber) {
            max = arr[i];
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", maxNumber);
    free(arr);
    return 0;
}
