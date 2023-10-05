#include <stdio.h>
	void inputArr1(int a[],int n) {
		int i;
		for(i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
	}
	void inputArr2(int b[],int n) {
		int i;
		for(i=0;i<n;i++) {
			scanf("%d",&b[i]);
		}
	}
	int tichVecto(int a[],int b[],int n) {
		int i;
		int sum=0;
		for(i=0;i<n;i++) {
			sum+=a[i]*b[i];
		}
		return sum;
	}
	
	int main () {
		int a[100],b[100];
		int n;
		scanf("%d",&n);
		inputArr1(a,n);
		inputArr2(b,n);
		printf("%d",tichVecto(a,b,n));
		return 0;
	}
