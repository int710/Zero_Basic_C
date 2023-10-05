#include <stdio.h>

void giaiPTBacNhat(float a, float b, int* soNghiem) {
    if (a == 0 && b != 0) {
        printf("Vo nghiem");
        *soNghiem = 0;
    } else if (a == 0 && b == 0) {
        printf("Moi x la nghiem");
        *soNghiem = -1;
    } else {
        float x = -b / a;
        printf("%.5f", x);
        *soNghiem = 1;
    }
}

int main() {
    float a, b;
    int soNghiem;
    scanf("%f%f", &a, &b);
    giaiPTBacNhat(a, b, &soNghiem);
    return 0;
}

