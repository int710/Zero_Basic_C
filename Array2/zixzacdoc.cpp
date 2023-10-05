#include <stdio.h>
#define MAX 20
void matrixdoc(int m[][MAX],int hang,int cot) {
	int value = 1;
	int tren = 0, duoi = hang -1;
	int di = 0,  ve = cot-1;
	while (di <= ve) {
		if(di % 2 ==0) {
			for(int i= tren;i<= duoi;i++) {
				m[i][di] = value++;
			}
		} else {
			for(int i= duoi;i>= tren;i--) {
				m[i][di] = value++;
			}
		}
		di++;
	}
}

void inMatrix(int m[][MAX],int hang,int cot) {
	for(int i=0;i<hang;i++) {
		for(int j=0;j<cot;j++) {
			printf("%d",m[i][j]);
		}
		printf("\n");
	}
}

int main () {
	int m[20][20];
	int hang,cot; 
	scanf("%d%d",&hang,&cot);
	matrixdoc(m,hang,cot);
	inMatrix(m,hang,cot);
	return 0;
}
