#include <stdio.h> 
	void readArr(int a[][20],int hang,int cot) {
		int i,j;
		for(i=0;i<hang;i++) {
			for(j=0;j<cot;j++) {
				scanf("%d",&a[i][j]);
			}
		}
	}
	int soLanXuatHien (int a[][20],int hang,int cot,int value) {
		int i,j;
		int dem=0;
		for(i=0;i<hang;i++) {
			for(j=0;j<cot;j++) {
				if(a[i][j]==value) {
					dem++;
				}
			}
		}
		return dem;
	}
	int main () {
		int hang,cot; scanf("%d%d",&hang,&cot);
		int a[20][20];
		readArr(a,hang,cot);
		int value; scanf("%d",&value);
		printf("%d",soLanXuatHien(a,hang,cot,value));
		return 0;
	}
