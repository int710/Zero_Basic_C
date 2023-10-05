#include <stdio.h>
	void nhapMang(int arr[],int n) {
		int i=0;
		for(i=0;i<n;i++) {
			scanf("%d",&arr[i]);
		}
	}
	
	void inMang(int arr[],int n,int x) {
		int i;
		for(i=0;i<n;i++) {
			printf("%d ",arr[i]);
			if((i+1)%x==0)
				printf("\n");
		}	
	}
	
	int main () {
		int arr[50];
		int n; scanf("%d",&n);
		nhapMang(arr,n);
		int x; scanf("%d",&x);
		inMang(arr,n,x);
	}
