#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* capPhatMang(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    return arr;
}

int* nhapMang(int n) {
    int* arr = capPhatMang(n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    return arr;
}

bool laTonTai(int* arr, int n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value)
            return true;
    }
    return false;
}

int* themPhanTu(int* arr, int* n, int value) {
    if (laTonTai(arr, *n, value)) {
        return arr;
    }
    (*n)++;
    arr = (int*)realloc(arr, *n * sizeof(int));
    arr[*n - 1] = value;
    return arr;
}

int demSoLanXuatHien(int* arr, int n, int value) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value)
            count++;
    }
    return count;
}

int* xoaPhanTu(int* arr, int* n, int index) {
    for (int i = index; i < (*n) - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    arr = (int*)realloc(arr, (*n) * sizeof(int));
    return arr;
}

int* xoaPhanTuTrungNhau(int* arr, int* n) {
    for (int i = 0; i < (*n); i++) {
        while (demSoLanXuatHien(arr, *n, arr[i]) > 1)
            arr = xoaPhanTu(arr, n, i);
    }
    return arr;
}

void inMang(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int nhapData() {
    int n;
    scanf("%d", &n);
    return n;
}

int main() {
    int n;
    scanf("%d", &n);
    int* arr = nhapMang(n);
    arr = themPhanTu(arr, &n, nhapData());
    inMang(arr, n);
    arr = themPhanTu(arr,&n,nhapData());
	inMang(arr,n);
	arr = themPhanTu(arr,&n,nhapData());
	inMang(arr,n);
	arr = themPhanTu(arr,&n,nhapData());
	inMang(arr,n);
	arr = xoaPhanTuTrungNhau(arr,&n);
	inMang(arr,n);
	return 0;
}
