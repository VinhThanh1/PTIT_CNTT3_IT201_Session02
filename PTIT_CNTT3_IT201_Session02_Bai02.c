//
// Created by Thanh on 6/17/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int number;
    int count = 0;


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


    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &number);


    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            count++;
        }
    }


    printf("So %d xuat hien %d lan trong mang.\n", number, count);


    free(arr);

    return 0;
}
