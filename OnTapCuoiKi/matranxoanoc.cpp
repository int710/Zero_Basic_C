#include <stdio.h>
#define MAX 10

void createMatrixXoanOc (int m[][MAX],int n) {
    int value=1;
    int top=0, left =0, right = n-1, bot=n-1;
    while (1) {
        // trai phai, tren
        for(int i=left;i<=right;i++) {
            m[top][i] = value++;
        } top++;
        if(top>bot) {
            break;
        }
        // tren duoi, phai
        for(int i= top;i<=bot;i++) {
            m[i][right] = value++;
        } right--;
        if(right<left) {
            break;
        }
        // phai trai, duoi
        for(int i = right;i>=left;i--) {
            m[bot][i] = value++;
        } bot--;
        if(bot<top){
            break;
        }
        // duoi tren, trai
        for(int i=bot;i>=top;i--) {
            m[i][left]=value++;
        }left++;
        if(left>right) {
            break;
        }
    }
}

void inMatran (int m[][MAX],int n) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%5d",m[i][j]);
        }
        printf("\n");
    }
}

int main () {
    int m[10][10];
    int n; scanf("%d",&n);
    createMatrixXoanOc(m,n);
    inMatran(m,n);
    return 0;
}

