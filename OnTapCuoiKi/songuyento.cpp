#include <stdio.h>
#include <math.h>

// hàm ki?m tra s? nguyên t?
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// hàm d?i ch? 2 s?
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    printf("Nhap so phan tu cua day: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua day: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  printf("Day so ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (isPrime(arr[i]) && !isPrime(arr[j])) {
                swap(&arr[i], &arr[j]);
            } else if (arr[i] == 1 && arr[j] != 1) {
                swap(&arr[i], &arr[j]);
            }
        }
    }


    printf("\nDay so sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

