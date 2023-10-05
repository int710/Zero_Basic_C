#include <stdio.h> 
int main () {
	int a[1000];
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	// Duyet mang nay =))
	int sum=0;
	for(i=0;i<n;i++) {
		if(a[i] % 2 != 0) {
			sum+=a[i];
		}
	}
	printf("%d",sum);
	return 0;
}
