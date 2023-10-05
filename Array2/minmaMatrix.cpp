#include <stdio.h> 
	void readArr(int a[][20],int hang,int cot) {
		int i,j;
		for(i=0;i<hang;i++) {
			for(j=0;j<cot;j++) {
				scanf("%d",&a[i][j]);
			}
		}
	}
	int isMin (int a[][20],int hang,int cot) {
		int i,j;
		int Min=a[0][0];
		for(i=0;i<hang;i++) {
			for(j=0;j<cot;j++) {
				if(a[i][j]<Min) {
					Min=a[i][j];
				}
			}
		}
		return Min;
	}
	int isMax (int a[][20],int hang,int cot) {
		int i,j;
		int Max=a[0][0];
		for(i=0;i<hang;i++) {
			for(j=0;j<cot;j++) {
				if(a[i][j]>Max) {
					Max=a[i][j];
				}
			}
		}
		return Max;
	}
	int main () {
		int hang,cot; scanf("%d%d",&hang,&cot);
		int a[20][20];
		readArr(a,hang,cot);
		printf("Max = %d\nMin = %d",isMax(a,hang,cot),isMin(a,hang,cot));
		return 0;
	}
