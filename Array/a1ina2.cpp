#include <stdio.h>
	void arr1(int a[],int m) {
		int i;
		for(i=0;i<m;i++) {
			scanf("%d",&a[i]);
		}
	}
	void arr2(int b[],int n) {
		int i;
		for(i=0;i<n;i++) {
			scanf("%d",&b[i]);
		}
	}
	void kiemTra(int a[],int b[],int m,int n) {
		int i=0,j=0;
		while(i<m && j<n) {
			if(a[i] < b[j]) {
				i++;
			} else if(a[i] > b[j]) {
				j++;
			} else {
				printf("%d ",a[i]);
				i++;
				j++;
			}
   			}  	
		}
	int main () {
		int a[20],b[20];
		int m,n;
		scanf("%d",&m);
		arr1(a,m);
		scanf("%d",&n);
		arr2(b,n);
		kiemTra(a,b,m,n);
		return 0;
	}
