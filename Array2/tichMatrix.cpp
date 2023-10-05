#include <stdio.h>
	void readArr1(int a[][20],int m,int n) {
		int i,j;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++) {
				scanf("%d",&a[i][j]);
			}
		}
	}
	void readArr2(int b[][20],int n,int p) {
		int i,j;
		for(i=0;i<n;i++){
			for(j=0;j<p;j++) {
				scanf("%d",&b[i][j]);
			}
		}
	}
		/*  Giai thich code cho vong for i,j,k tuong tu i la hang j cot k la vua la hang la cot 
	than chu tich hai ma tran la hang ma tran truoc , cot ma tran sau ta co cot a = hang b :))))
	recomment bui thanh quan dep trai
	*/
	void tichMatrix(int a[][20],int b[][20],int m,int n,int p,int ab[][20]) {
		int i,j,k;
		for(i=0;i<m;i++) {
			for(j=0;j<p;j++) {
				int sum=0;
				for(k=0;k<n;k++) {
					sum += a[i][k]*b[k][j];
			    }
				ab[i][j]=sum;
			}
		}
	} 

	void outputArr(int ab[][20],int m,int p) {
		int i,j;
		for(i=0;i<m;i++) {
			for(j=0;j<p;j++) { 
				printf("%6d",ab[i][j]);
			}
			printf("\n");
		}
	}
	
	int main () {
		int m,n,p;
		scanf("%d%d%d",&m,&n,&p);
		int a[20][20],b[20][20],ab[20][20];
		readArr1(a,m,n);
		readArr2(b,n,p);
		tichMatrix(a,b,m,n,p,ab);
		outputArr(ab,m,p);
		return 0;
	}
