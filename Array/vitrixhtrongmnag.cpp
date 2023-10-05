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
	void vitri(int arr[],int n,int value) {
		int i;
		for(i=0;i<n;i++) {
			if(arr[i]==value) 
				printf("%d ",i);
		}
	}
	
	int main () {
		int arr[20];
		int n; scanf("%d",&n);
		nhapArr(arr,n);
	//	xuatArr(arr,n);
		int value; scanf("%d",&value);
		int test;
		test = xuatHien(arr,n,value);
		if(test==0) {
			printf("The value %d does not exist in the given array",value);
		} else {
			printf("The value %d appears %d time(s)\n",value,test);
            printf("At the following position(s): ");
            vitri(arr,n,value);
		}
	return 0;
	}
