#include <stdio.h>

void inc(int* x) {
    (*x)++;
}

void dec(int* x) {
    (*x)--;
}

int main() {
    int x;
    scanf("%d", &x);
    dec(&x);
    printf("%d\n", x);
    inc(&x);
    inc(&x);
    printf("%d\n", x);
    return 0;
}

