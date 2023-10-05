#include <stdio.h>
#include <math.h>
struct toado {
	double x,y;
};
struct tamGiac { 
	toado a;
	toado b;
	toado c;
}; // lan luot a,b,c la 3 dinh cua tam giac
void nhapTamGiac (tamGiac* tmp) {
	scanf("%lf %lf",&(tmp->a.x), &(tmp->a.y));
	scanf("%lf %lf",&(tmp->b.x), &(tmp->b.y));
	scanf("%lf %lf",&(tmp->c.x), &(tmp->c.y));
}
double tinhCV (struct tamGiac* tg) {
	double a = sqrt( pow((tg->b.x) - (tg->a.x),2) + pow((tg->b.y) - (tg->a.y),2));
	double b = sqrt( pow((tg->c.x) - (tg->b.x),2) + pow((tg->c.y) - (tg->b.y),2));
	double c = sqrt(pow(tg->a.x - tg->c.x, 2) + pow(tg->a.y - tg->c.y, 2));
	return a+b+c;
}
double tinhDienTich(struct tamGiac* tg) {
    double a = sqrt(pow(tg->b.x - tg->a.x, 2) + pow(tg->b.y - tg->a.y, 2));
    double b = sqrt(pow(tg->c.x - tg->b.x, 2) + pow(tg->c.y - tg->b.y, 2));
    double c = sqrt(pow(tg->a.x - tg->c.x, 2) + pow(tg->a.y - tg->c.y, 2));
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main () {
	int T; scanf("%d",&T);
	for (int i=0;i<T;i++) {
		struct tamGiac tamgiac;
		nhapTamGiac(&tamgiac);
		printf("s = %.5lf; p = %.5lf\n", tinhDienTich(&tamgiac),  tinhCV(&tamgiac));
	}
	return 0;
}
