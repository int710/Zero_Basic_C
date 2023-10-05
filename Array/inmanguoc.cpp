#include <stdio.h>
	void nhapMang(int arr[],int n) {
		int i;
		for(i=0;i<n;i++) {
			scanf("%d",&arr[i]);
		}
	}
	void xuatMang(int arr[],int n) {
		int i;
		for(i=0;i<n;i++) {
			printf("%-5d ",arr[i]);
		}
	}
	void xuatMangNguoc(int arr[],int n) {
		int i;
		for(int i=n-1;i>=0;i--) {
			printf("%-5d ",arr[i]);
		}
	}
	
	int main () {
		int arr[50];
		int n; scanf("%d",&n);
		nhapMang(arr,n);
		xuatMang(arr,n);
		printf("\n");
		xuatMangNguoc(arr,n);
		return 0;
	}
