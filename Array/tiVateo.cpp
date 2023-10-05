#include <stdio.h>

int main () {
    int n; 
    scanf("%d", &n);
    int p, q;
    scanf("%d", &p);
    int a[100] = {0}; 
    for(int i = 0; i < p; i++) {
        int level;
        scanf("%d", &level);
        a[level - 1] = 1; // nhap vao level va luu vao mang la level da thang
    }
    scanf("%d", &q);
    int b[100] = {0}; 
    for(int i = 0; i < q; i++) {
        int level;
        scanf("%d", &level);
        b[level - 1] = 1; // nhap vao level va luu vao mang la level da thang
    }
    // kiem tra xem có level nào không win cua Tí và Tèo không
    for(int i = 0; i < n; i++) {
        if(!a[i] && !b[i]) {
            printf("LOSE");
            return 0;
        }
    }
    printf("WIN");
    return 0;
}

