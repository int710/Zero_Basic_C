#include <stdio.h>
#include <stdlib.h>

void daoArr(int arr[], int* n) {
    int m = *n / 2;
    for(int i = 0; i < m; i++) {
        int tmp = arr[i];
        arr[i] = arr[*n - i - 1];
        arr[*n - i - 1] = tmp;
    }
}

void inputArr(int* arr, int n) {
    int i;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArr(int* arr, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
//    printf("\n");
}

int main () {
    int n;
    scanf("%d", &n);
    int* a = (int*) calloc(n, sizeof(int));
    inputArr(a, n);
//    printArr(a, n);
    daoArr(a, &n);
    printArr(a, n);
    return 0;
}

