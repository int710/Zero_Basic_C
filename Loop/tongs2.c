#include <stdio.h>
int main() {

	int n,i;
	double sum=0;
	double mau=1;
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		mau*=i;
		sum += 1/mau;
	}
	printf("%.10lf",sum);
}
