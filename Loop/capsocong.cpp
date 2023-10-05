#include <stdio.h> 
	int main () {
		int i,n,d,n0;
		scanf("%d%d%d",&n,&d,&n0);
		int sum=0;
		int u=n0;
		for(i=0;i<n;i++) {
			sum+=u;
			u=u+d;
		}
		printf("S = ",n0);
		int tmp = n0;
		for(i=0;i<n;i++) {
			printf("%d",tmp);
			tmp = tmp+d;
			if(i<n-1) 
				printf(" + ");
		}
		printf(" = %d", sum);
	}
