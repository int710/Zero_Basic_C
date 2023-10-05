#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i, j, k;
// Dung vong lap tu 50k,20k,10k tim so to 50k co the rut roi moi giam dan gia tri 20k va 10k
    for (i = 0; i <= n / 10000; i++) { // 10k
        for (j = 0; j <= n / 20000; j++) { // 20k
            for (k = 0; k <= n / 50000; k++) { // 50k
                if (i * 10000 + j * 20000 + k * 50000 == n) {
                    printf("%d to 10000, %d to 20000, %d to 50000\n", i, j, k);
                }
            }
        }
    }
    return 0;
}
