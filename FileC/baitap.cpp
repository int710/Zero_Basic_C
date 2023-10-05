#include <stdio.h> 
// Bui Thanh Quan CT070242
	int main () {
		FILE* f= fopen("BAI1.txt","w+");
		// Phan 1 tao file va ghi vao phan tu mang mot chieu
		int i,j,n; scanf("%d",&n);
		fprintf(f,"%d\n",n);
		int a[100];
		for(i=0;i<n;i++) {
			scanf("%d",&a[i]);
			fprintf(f,"%d ",a[i]);
		}
		// Phan 2 doc lay mang tu file sap xep lai
		if(f==NULL) {
			printf("Khong tim thay file !");
		}
		// readfile in vao array va thuc hien sap xep
		fscanf(f,"%d",&n);
		for(i=0;i<n;i++) {
			fscanf(f,"%d",&a[i]);
		}
		for(i=0;i<n-1;i++) {
			for(j=0;j<n-i-1;j++) {
				if(a[j] > a[j+1]) {
					int tmp = a[j];
					a[j] = a[j+1];
					a[j+1] = tmp;
				}
			}
		}
		for(i=0;i<n;i++) {
			printf("%d ",a[i]);
		}
		fclose(f);
		// Ghi vao file moi sau khi sap xep
		FILE* ftext = fopen("BAI2.txt","w");
		for(i=0;i<n;i++) {
			fprintf(ftext,"%d ",a[i]);
		}
		fclose(ftext);
	}
