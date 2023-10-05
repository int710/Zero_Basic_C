#include <stdio.h>
void readArr(int a[],int* n) {
	for (int i=0;i<*n;i++) {
		scanf("%d",a+i);
	}
}
void printArr(int a[],int* n) {
	for (int i=0;i<*n;i++) {
		printf("%d ",a[i]);
	}
}
void hoandoi(int* pa,int* pb) {
	int tmp = *pa;
	*pa=*pb;
	*pb=tmp;
}
void giamDanArr(int *pa, int *pn) {
    int i, j;
    for (i = 0; i < *pn - 1; i++) {
        for (j = 0; j < *pn - i - 1; j++) {
            if (pa[j] < pa[j + 1]) {
                hoandoi(pa + j, pa + j + 1);
            }
        }
    }
}
int main () {
	int a[20];
	printf("Nhap so phan tu cua mang: ");
	int n; scanf("%d",&n);
	readArr(a,&n);
	printf("Mang truoc khi sap xep: ");
	printArr(a,&n);
	printf("\n");
	printf("Mang sau khi da sap xep: ");
	giamDanArr(a,&n);
	printArr(a,&n);
	return 0;
}
