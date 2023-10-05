#include <stdio.h>
	
	int main () {
		int m,n,i,j;
		int arr[50][50];
		scanf("%d%d",&m,&n);
		// Nhap mang 
		for(i=0;i<m;i++) {
			for(j=0;j<n;j++) {
				scanf("%d",&arr[i][j]);
			}
		}
		
		// In mang
		printf("int a[%d][%d]: {\n",m,n);
		 for (int i = 0; i < m; i++) {
        printf("\t{");
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
            if (j < n - 1) {
                printf(", ");
            }
        }
        printf("}\n");
    }
    printf("};\n");
		return 0;
	}
