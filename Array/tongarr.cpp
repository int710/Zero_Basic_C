#include <stdio.h> 
	int tongArr (int arr[],int n) {
		int i,tong=0;
		for(i=0;i<n;i++) {
			tong+=arr[i];
		}
		return tong;
	}
	
	int main () {
		int arr[50];
		int i,n;
		scanf("%d",&n);
		for(i=0;i<n;i++) {
			scanf("%d",&arr[i]);
		}
		printf("%d",tongArr(arr,n));
	}
