#include <stdio.h>
#include <math.h>
int isSNT (int n) {
	if(n<2) return 0;
	for (int i=2 ; i<=sqrt(n); i++) {
		if ( n % i  == 0) {
			return 0;
		} else {
			return 1;
		}
	}
}
int giaiThua(int n) {
	if(n==1)
		return 1;
	return n*giaiThua(n-1);
}
int main () {
	printf("Nhap mot so can kiem tra: ");
	int n; scanf("%d",&n);
	if(isSNT(n))
	 	printf("SNT\n");
	else
		printf("KHONG PHAI SNT\n");
	printf("Gia thua %d la: %d",n,giaiThua(n));
}
