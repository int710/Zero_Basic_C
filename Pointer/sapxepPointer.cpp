#include <stdio.h>

void swap(int *pa, int *pb) {
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

void printArr(int *pa, int *pn) {
    int i;
    for (i = 0; i < *pn; i++) {
        printf("%5d", *(pa + i));
    }
}

void tangDanArr(int *pa, int *pn) {
    int i, j;
    for (i = 0; i < *pn - 1; i++) {
        for (j = 0; j < *pn - i - 1; j++) {
            if (pa[j] > pa[j + 1]) {
                swap(pa + j, pa + j + 1);
            }
        }
    }
}

void giamDanArr(int* pArr,int* pn) {
    int i, j;
    for (i = 0; i < *pn - 1; i++) {
        for (j = 0; j < *pn - i - 1; j++) {
            if (pArr[j] < pArr[j + 1]) {
                swap(pArr + j, pArr + j + 1);
            }
        }
    }
}

int main() {
    int a[50];
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printArr(a, &n);
    printf("\n");

    tangDanArr(a, &n);
    printArr(a, &n);
    printf("\n");

    giamDanArr(a, &n);
    printArr(a, &n);
    printf("\n");

    return 0;
}

