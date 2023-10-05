#include <stdio.h>

int main () {
	int x,y;
	printf("Nhap vao kich thuoc HCN theo ti le DAI x RONG: ");
	scanf("%d%d",&x,&y);
	
	for(int i=1;i<=x;i++) {
		for(int j=1;j<=y;j++) {
			if(i == 1 || i == x || j == y || j == 1) {
				printf("*");
			} else {
				printf(" ");
			}
		} printf("\n");
	}
	return 0;
}
