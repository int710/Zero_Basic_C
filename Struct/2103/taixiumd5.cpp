#include <stdio.h>
#include <stdlib.h>
// Code tai xiu md5 game Avatar 

void getRandTaiXiu (int min,int max) {
	// function rand xuc sac
	printf("Ket qua: ");
	int result=0;
	for (int i=0;i<3;i++) {
		int randXiNgau = min + (int)( rand() * (max - min + 1.0) / (1.0 + RAND_MAX) );
		printf("%d ",randXiNgau);
		result+=randXiNgau;
	}
	printf("\n");
	if(result >= 11 && result <= 18) 
		printf("Tai - %d",result);
	else
		printf("Xiu - %d",result);
}
void menuGame () {
	printf("\t\t\tGame Tai Xiu Md5 \n");
	printf("\t\t\t1. Bat dau phien moi \n");
	printf("\t\t\t0. Thoat \n");
}

int main () {
	menuGame();
	int chon,phien=0;
	do { 
		printf("\n");
		scanf("%d",&chon);
		switch(chon) {
			case 0:
				exit(0);
			case 1:
				getRandTaiXiu (1,6);
				break;
			default: printf("\nError, vui long nhap 1 de tiep tuc, roi khoi tro choi nhap 0");
		}
	} while (chon!=0);
	
	return 0;
}
