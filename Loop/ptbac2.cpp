#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    // Nh?p giá tr? a, b, c
    scanf("%lf %lf %lf", &a, &b, &c);

    // Tính delta
    delta = b*b - 4*a*c;

    // Xét các tru?ng h?p c?a phuong trình
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem");
            } else {
                printf("Phuong trinh vo nghiem");
            }
        } else {
            double x = -c / b;
            printf("Phuong trinh co 1 nghiem don\nx = %.5lf", x);
        }
    } else {
        if (delta > 0) {
            x2 = (-b + sqrt(delta)) / (2*a);
            x1 = (-b - sqrt(delta)) / (2*a);
            printf("Phuong trinh co 2 nghiem phan biet\nx1 = %.5lf\nx2 = %.5lf", x1, x2);
        } else if (delta == 0) {
            x1 = -b / (2*a);
            printf("Phuong trinh co nghiem kep\nx1 = x2 = %.5lf", x1);
        } else {
            printf("Phuong trinh vo nghiem");
        }
    }

    return 0;
}

