#include <stdio.h> 
	int main () {
		int d,m,n;
		scanf("%d %d %d",&d,&m,&n);
		// In ra Thu Hight den ChuNhat 10 vi tri space
		printf("THANG %d\n",m);
		printf("     Thu 2     Thu 3     Thu 4     Thu 5     Thu 6     Thu 7  Chu Nhat\n");
		// In lich de ban thoi nao =))
		int i,j;
		for(i=1;i<=n;i++) {
			// in ra ngay dau cua thang cho chay tu thu 2 den (d)thu cua ngay dau tien
			if(i==1) {
				for(j=2;j<d;j++) {
					printf("          ");
				}
			}
			printf("%10d",i);
			// Kiem tra xem da den ch? nhat chua neu roi thi xuong dong sang thu 2
			if((d+i-2)%7==0) {
				printf("\n");
			}
		}
		return 0;
	}
