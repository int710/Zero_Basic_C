#include <stdio.h>
	void readArr(int arr[], int n) {
		int i;
		for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
}
	void inArr(int arr[], int n) {
		int i;
		printf("{");
		for(i=0;i<n;i++) {
			printf("%d",arr[i]);
			if(i<n-1) 
				printf(", ");
		}
		printf("};");
	}
	int main () {
		int arr[100];
		int n; scanf("%d",&n);
		readArr(arr,n);
		printf("a[%d] = ",n);
		inArr(arr,n);
	}
