#include <stdio.h>
	void nhapMang (int arr[],int n) {
		int i;
		for(i=0;i<n;i++) {
			scanf("%d",&arr[i]);
		}
	}
	
	void kiemTra (int arr[],int n) {
		int i,demC=0,demL=0;
		for(i=0;i<n;i++) {
			if(arr[i]%2==0)
				demC++;
			else
				demL++;
		}
		printf("%d even element(s), %d odd element(s)\n",demC,demL);
	}
	
	int main () {
		int T,n,i; scanf("%d %d",&T,&n);
		for(i=0;i<T;i++) {
			int arr[50];
			nhapMang(arr,n);
			printf("Testcase %d: ",i);kiemTra(arr,n);
		}
		
	}
