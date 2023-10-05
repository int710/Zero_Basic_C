#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

struct circle {
	double tamIx,tamIy; // tâm duong tron 
	double radiusO; // bán kính (O)
};

void nhapVaoDuongTron (struct circle* p) {
	scanf("%lf %lf",&(p->tamIx), &(p->tamIy));
	scanf("%lf",&(p->radiusO));
}

void tinhToan (const struct circle *p,int d) {
	double chuVi = 2 * p->radiusO * PI;
	printf("Chu vi = %.*lf\n",d,chuVi);
	double dienTich = PI * p->radiusO * p->radiusO;;
	printf("Dien tich = %.*lf\n\n",d,dienTich);
}

void hienThiDuongTron (const struct circle *p,int d) {
	printf("Tam = (%.*lf, %.*lf)\n", d,(p->tamIx), d,(p->tamIy));
	printf("Ban kinh = %.*lf\n", d,(p->radiusO));
	tinhToan(p,d);
}

int main () {
	int T; scanf("%d",&T); 
	for (int i=0;i<T;i++) {
		struct circle tmp;
		nhapVaoDuongTron(&tmp);
		int d; scanf("%d",&d);
		hienThiDuongTron(&tmp,d);
	}
	return 0;
}
