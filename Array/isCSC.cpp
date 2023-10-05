#include <stdio.h>
#include <stdbool.h>
    void arr(int a[],int n) {
        for(int i=0;i<n;i++) {
            scanf("%d",&a[i]);
        }
    }
 
    bool kiemTra(int a[], int n) {
    if (n == 1) {
        return true;
    }
    int d = a[1] - a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] != d) {
            return false;
        }
    }
    return true;
}
    int main () {
        int a[100];
        int n; scanf("%d",&n);
        arr(a,n);
        if(kiemTra(a,n)) {
            printf("YES");
        } else {
            printf("NO");
        }
        return 0;
    }
