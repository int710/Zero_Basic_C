#include <stdio.h>

	void inputArr(int arr[],int n) {
		int i;
		for(i=0;i<n;i++) {
			scanf("%d",&arr[i]);
		}
	}
	
	void inArr(int arr[],int n) {
		int i;
		for(int i=0;i<n;i++) {
			printf("%-5d",arr[i]);
		}
	}
	
	void swapArr(int arr[],int n) {
		int i,j;
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++) {
				int swap;
				if(arr[i]>arr[j]) {
					swap = arr[i];
					arr[i] = arr[j];
					arr[j] = swap;	
				}
			}
		}
	}
	
	int main () {
		int n; scanf("%d",&n);
		int arr[50];
		inputArr(arr,n);
		inArr(arr,n);
		swapArr(arr,n); printf("\n");
		inArr(arr,n);
	}
