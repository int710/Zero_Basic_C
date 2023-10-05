#include <stdio.h>

void printArrAB (int a[],int b[],int* n1,int* n2) {
	int i=0,j=0;
	while (i < *n1 && j < *n2) {
	 	printf("%d %d ",a[i], b[j]);
	 	i++;
	 	j++;
	}
	for (int k=i;k<*n1;k++) {
		printf("%d ",a[k]);
	}
	for (int k=j;k<*n2;k++) {
		printf("%d ",b[k]);
	}
	
}
int main () {
	int n1, n2;
    scanf("%d", &n1);
    int a[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n2);
    int b[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
	printArrAB(a,b,&n1,&n2);
	return 0;
}
