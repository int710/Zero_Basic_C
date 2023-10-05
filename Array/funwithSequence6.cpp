#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    int S[30],Q[30];
    int sumS = 0, sumQ = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &S[i]);
        sumS += S[i];
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        int num;
        scanf("%d", &Q[i]);
        sumQ += Q[i];
    }

    if (sumS > sumQ) {
        for (int i = 0; i < n; i++) {
            printf("%d ", S[i]);
        }
    } else if (sumS < sumQ) {
        for (int i = 0; i < m; i++) {
            printf("%d ", Q[i]);
        }
    } else {
        if (n > m) {
            for (int i = 0; i < n; i++) {
                printf("%d ", S[i]);
            }
        } else if (n < m) {
            for (int i = 0; i < m; i++) {
                printf("%d ", Q[i]);
            }
        } else {
            printf("0");
        }
    }

    return 0;
}

