#include <stdio.h>
#define MAX 10
void creatMatrixXoanOc(int m[][MAX],int n) {
    int value=1;
    int top = 0, left =0, right = n-1,bot = n-1;
    while (true) {
        // dien tu trai qua phai le tren cung
        for (int i=left;i<=right;i++) {
            m[top][i] = value++;
        } top++;
        if(top > bot) {
            break;
        }
        // dien tu tren xuong duoi le ben phai
        for(int i=top;i<=bot;i++) {
            m[i][right]=value++;
        } right--;
        if (left > right) {
            break;
        }
        // dien tu phai qua trai le ben duoi
        for (int i=right;i>=left;i--) {
            m[bot][i]=value++;
        } bot--;
        if(top>bot) {
            break;
        }
        // dien tu duoi len tren le ben trai
        for(int i=bot;i>=top;i--) {
            m[i][left]=value++;
        } left ++;
        if (left > right) {
            break;
        }
    }
}

void printMatrix(int m[][MAX],int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) {
			printf("%5d",m[i][j]);
		}
		printf("\n");
	}
}
int main () {
	int m[10][10];
	int n; scanf("%d",&n);
	creatMatrixXoanOc(m,n);
	printMatrix(m,n);
	return 0;
}
