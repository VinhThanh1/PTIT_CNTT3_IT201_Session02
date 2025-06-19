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

    int* arr = (int*)malloc((n + 1) * sizeof(int));

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int pos, value;
    do {
        printf("Nhap vi tri muon chen (0 <= pos <= %d): ", n);
        scanf("%d", &pos);
    } while (pos < 0 || pos > n);

    printf("Nhap gia tri muon chen: ");
    scanf("%d", &value);

  
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;

    n++;

   
    printf("Mang sau khi them:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    free(arr);

    return 0;
}
