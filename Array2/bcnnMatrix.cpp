#include <stdio.h>


int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int d, c;
    scanf("%d%d", &d, &c);

    int matrix[d][c];
    int result = 1;

    
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            result = lcm(result, matrix[i][j]);
        }
    }

   
    printf("BCNN = %d\n", result);
    return 0;
}

