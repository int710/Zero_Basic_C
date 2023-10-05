#include <stdio.h>
#define MAX 20
void matrixZicZac (int m[][MAX],int hang,int cot) {
		int value=1;
		int top = 0, left = 0, right = cot -1, bot = hang -1;
		while (top <= bot) {
			if (top % 2 == 0) {
				for(int i=left;i<=right;i++) {
					m[top][i] = value++;
				}
			} else {
				for(int i=right;i>=left;i--) {
					m[top][i] = value++;
				}
			}
			top++;
	}
}

void inMatrix(int Matrix[][MAX],int dong,int cot) {
	for (int i=0;i<dong;i++) {
		for(int j=0;j<cot;j++) {
			printf("%4d",Matrix[i][j]);
		}
		printf("\n");
	}
}

int main () {
	int m[20][20];
	int hang,cot; 
	scanf("%d%d",&hang,&cot);
	matrixZicZac(m,hang,cot);
	inMatrix(m,hang,cot);
	return 0;
}
