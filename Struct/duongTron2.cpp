#include <stdio.h>
#include <math.h>

struct circle {
    double tamX, tamY;
    double radiusO;
};

typedef struct diemP {
    double x, y;
} diemP;

struct circle nhapTamDuongTron() {
    struct circle tmp;
    scanf("%lf %lf", &tmp.tamX, &tmp.tamY);
    return tmp;
}

void nhapDuongTron(struct circle* tmp, diemP* p) {
    *tmp = nhapTamDuongTron();
    scanf("%lf", &(tmp->radiusO));
    scanf("%lf %lf", &(p->x), &(p->y));
}

// Dùng enum de liêt kê cac vi tri
enum vitri {
    TRONG,
    TREN,
    NGOAI
};

enum vitri kiem_tra_vi_tri(struct circle* tmp, diemP* p) {
    double khoang_cach = sqrt(pow((p->x) - (tmp->tamX), 2) + pow((p->y) - (tmp->tamY), 2));
    if (khoang_cach < (tmp->radiusO)) {
        return TRONG;
    } else if (khoang_cach == (tmp->radiusO)) {
        return TREN;
    } else {
        return NGOAI;
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        struct circle tmp;
        diemP p;
        nhapDuongTron(&tmp, &p);
        enum vitri vt = kiem_tra_vi_tri(&tmp, &p);
        if (vt == TRONG) {
            printf("Diem P nam trong hinh tron C\n");
        } else if (vt == TREN) {
            printf("Diem P nam tren duong tron C\n");
        } else {
            printf("Diem P nam ngoai hinh tron C\n");
        }
    }
    return 0;
}

