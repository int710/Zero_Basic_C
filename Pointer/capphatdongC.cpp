#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int* allocateArr (int n);
int* push(int* arr,int* n,int value);
int* pushFront(int* arr,int* n,int value);
void inputArr(int * arr,int n);
void printArr(int* arr,int n);
bool isValue (int* arr,int n,int value);
int findIndex (int* arr,int n,int value);
void removebyValue (int* arr,int n,int value);
void removebyIndex (int* arr,int n,int index);
int* pop (int* arr,int* n, int* getValue);
int* removeAll (int* arr);
int* insertKeepAsc (int* arr,int* n,int value);
int main () {
	int n= 5;
	int* a = allocateArr(n);
	inputArr(a,n);
	push(a,&n,10);
	printArr(a,n);
	pushFront(a,&n,-10);
	printArr(a,n);
}
// calloc cap phát mot vùng nho dung và khoi tao tat ca các byte trong vùng nho dó bang giá tri 0. 
int* allocateArr (int n) {
	int* pArr = (int*)calloc(n,sizeof(int));
	if (pArr == NULL) 
		printf("Khong du bo nho cap phat\n");
	return pArr;
}

int* push(int* arr,int* n,int value) {
	// Cap phat mang len mot don vi
	arr = (int*)realloc(arr,((*n)+1)*sizeof(int));
	// Gan value vua nhap vao cuoi mang
	arr[*n] = value;
	// Tang kich thuoc mang
	(*n)++;
	return arr;
}

int* pushFront(int* arr,int* n,int value) {
	// Cap phat manng len mot don vi
	arr = (int*)realloc(arr,((*n)+1)*sizeof(int));
	// dich mang sang right 1 don vi
	int i;
	for (i=(*n);i>=1;i--) {
		arr[i]=arr[i-1];
	}
	// Gan gia tri
	arr[0] = value;
	// Tang mang len mot don vi
	(*n)++;
	return arr;
}
void inputArr(int* arr,int n) {
	int i;
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
}
void printArr(int* arr,int n) {
	int i;
	for(i=0;i<n;i++) 
		printf("%d ",arr[i]);
}
bool isValue (int* arr,int n,int value) {
	for(int i=0;i<n;i++) 
		if(arr[i]==value)
			return true;
	return false;
}
int findIndex (int* arr,int n,int value) {
	for(int i=0;i<n;i++) 
		if(arr[i]==value)
			return i;
	return -1;
}
int* removeIndex(int* arr, int* n, int index) {
	// index ngoai thi mang khong thay doi
	if (index < 0 || index >= *n) 
		return arr;
		
	// Ðay cac phan tu sau index de len 1 don vi
	for (int i = index; i < (*n) - 1; i++) {
		arr[i] = arr[i + 1];
	}
	// Cap phat lai mang
	arr = (int*)realloc(arr, ((*n) - 1) * sizeof(int));
	// Thay doi kich co mang
	(*n)--;
	return arr;
}

int* removebyValue(int* arr, int* n, int value) {
	return removeIndex(arr, n, findIndex(arr, *n, value));
}

int* pop(int* arr, int* n, int* getValue) {
    *getValue = arr[(*n)-1];
    arr = removebyIndex(arr, n, (*n)-1);
    return arr;
}



int* removeAll (int* arr) {
	free(arr);
	return NULL;
}
int* insertByIndex (int* arr,int* n,int index,int value) {
	if(index < 0 || index > (*n)) {
		return arr;
	}
	// cap phat mot don vi
	
}
int* insertKeepAsc (int* arr,int* n,int value) {
	int index=0;
	while(index <= (*n)) {
		if(arr[index] <= value) 
			index++;
	}
	arr = insertByIndex(arr,n,index,value);
	return arr;
}


