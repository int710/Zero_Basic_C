#include <stdio.h>
#include <math.h>

void giaiPhuongTrinhBacHai(double a, double b, double c, int* soNghiem, double* nghiem1, double* nghiem2) {
	if (a == 0) {
		if(b == 0) {
			if(c == 0) {
				printf("Moi x la nghiem\n");
				*soNghiem = -1;
			} else {
				printf("Phuong trinh vo nghiem\n");
				*soNghiem = 0;
			}
		} else {
			double x = -b/a;
			printf("Phuong trinh co 1 nghiem don\n");
			printf("x = %.5f",x);
			*soNghiem = 0;
		}
	} else {
    double delta = b*b - 4*a*c;
    if (delta < 0) {
        *soNghiem = 0;
        printf("Phuong trinh vo nghiem\n");
    } else if (delta == 0) {
        *soNghiem = 1;
        double x = -b/(2*a);
        printf("Phuong trinh co nghiem kep\n");
        printf("x = %.5lf\n", x);
    } else {
        *soNghiem = 2;
        double x1 = (-b - sqrt(delta))/(2*a);
        double x2 = (-b + sqrt(delta))/(2*a);
        printf("Phuong trinh co 2 nghiem phan biet\n");
        printf("x1 = %.5lf\n", x1);
        printf("x2 = %.5lf\n", x2);
        *nghiem1 = x1;
        *nghiem2 = x2;
    }
}
}

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    int soNghiem;
    double nghiem1, nghiem2;
    giaiPhuongTrinhBacHai(a, b, c, &soNghiem, &nghiem1, &nghiem2);
    return 0;
}

