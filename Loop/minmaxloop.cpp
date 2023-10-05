#include <stdio.h>

int main() {
    int T; scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        double min, max, a;
        scanf("%lf", &a);
        min = max = a;

        for (int i = 1; i < n; i++) {
            scanf("%lf", &a);
            if (a < min) {
                min = a;
            }
            if (a > max) {
                max = a;
            }
        }

        printf("Min = %15.3lf;     Max = %15.3lf\n",min,max);
    }
    return 0;
}

