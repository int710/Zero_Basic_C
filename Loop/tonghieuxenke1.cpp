#include <stdio.h>
	int main() {
		unsigned int n,i;
		long double sum=0;
		scanf("%u",&n);
		for(i=0;i<n;i++) {
			if(i%2==0) {
				sum+=(long double)1/i;
			} else {
				sum-=(long double)1/i;
			}
		}
		printf("%.10Lf",sum);
		printf("%.13Lf",sum);
	}

