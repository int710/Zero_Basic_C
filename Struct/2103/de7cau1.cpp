#include <stdio.h>
#define MAX 5

void readMatrix(int matrix[][MAX],int row,int col) {
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			scanf("%d",&matrix[i][j]);
		}
	}
}
int minMATRIX (int matrix[][MAX],int row,int col) {
	int min = matrix[0][0];
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			if(matrix[i][j]<min) {
				min = matrix[i][j];
			}
		}
	}
	return min;
}
void sumMATRIX (int matrix[][MAX],int row,int col) {
	int sum = 0;
	for(int i=0;i<row;i++) {
		for(int j=0;j<col;j++) {
			sum+=matrix[i][j];
			}
		}
	printf("Tong cua ma tran la: %d",sum);
}

int main() {
	int row,col;
	printf("Nhap kich co ma tran: ");
	scanf("%d%d",&row,&col);
	int matrix[5][5];
	readMatrix(matrix,row,col);
	printf("Phan tu nho nhat cua ma tran la: %d\n",minMATRIX(matrix,row,col));
	sumMATRIX(matrix,row,col);
	return 0;
}
