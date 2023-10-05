#include <stdio.h>
#include <stdbool.h>
	void nhapArr(int arr[], int n) {
		int i;
		for(i=0;i<n;i++) {
			scanf("%d",&arr[i]);
		}
	}
	
	void xuatArr(int arr[], int n ){ 
	    int i;
		for(i=0;i<n;i++) {
			printf("%d ",arr[i]);
		}
	}
	
	int xuatHien(int arr[],int n, int value) {
		int i,dem=0;
		for(i=0;i<n;i++) {
			if(arr[i]==value)
				dem++;
		}
		return dem;
	}
	
	int main () {
		int arr[20];
		int n; scanf("%d",&n);
		nhapArr(arr,n);
	//	xuatArr(arr,n);
		int value; scanf("%d",&value);
		printf("%d",xuatHien(arr,n,value));
	return 0;
	}
