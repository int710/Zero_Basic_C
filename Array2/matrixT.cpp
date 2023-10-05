#include <stdio.h>
		// fucntion nhap mang 2 chieu, in ra MATRIX
		// code by buithanquan =))
		void inputArr(int arr[][10],int m,int n) {
			int i,j;
			for(i=0;i<m;i++) {
				for(j=0;j<n;j++) {
					scanf("%d",&arr[i][j]);
				}
			}
		}
		
		void showScr (int arr[][10],int m,int n) {
			int i,j;
			for(i=0;i<m;i++) {
				for(j=0;j<n;j++) {
					printf("%d ",arr[i][j]);
				}
				printf("\n");
			}
		}
		
		void matrixT (int arr[][10],int m,int n) {
			int i,j;
			int matran[10][10];
			for(int i=0;i<m;i++) {
				for(int j=0;j<n;j++) {
					matran[j][i] = arr[i][j];
				}
			}
			    printf("Ma tran chuyen vi la: \n");
    			for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                printf("%d ", matran[i][j]);
                } printf("\n");
    			}
		}
		int main () {
			int arr[10][10];
			int n,m;
			scanf("%d%d",&m,&n);
			inputArr(arr,m,n);
			printf("\n\n");
			showScr(arr,m,n);
			matrixT(arr,m,n);
			
		}
