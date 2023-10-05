#include <stdio.h>

int main() {
    unsigned int n, i;
    scanf("%u", &n);
    long double sum = 0.0;
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += (long double)1 / i;
        } else {
            sum -= (long double)1 / i;
        }
    }
    printf("%.13Lf", sum);
    return 0;
}

