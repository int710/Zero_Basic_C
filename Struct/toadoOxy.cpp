#include <stdio.h>
#include <math.h>

struct ToaDo {
	double x;
	double y;
};

struct ToaDo nhapToaDo () {
	struct ToaDo tmp;
	scanf("%lf %lf",&tmp.x,&tmp.y);
	return tmp;
} 

void hienThiToaDo (struct ToaDo toado,int d) {
	printf("(%.*lf, %.*lf) ", d,toado.x, d,toado.y);
	if (toado.x >= 0 && toado.y >= 0) {
		printf("thuoc phan tu mat phang so 1\n");
	} else if (toado.x <= 0 && toado.y >= 0) {
		printf("thuoc phan tu mat phang so 2\n");
	} else if (toado.x <= 0 && toado.y <= 0) {
		printf("thuoc phan tu mat phang so 3\n");
	} else if (toado.x >= 0 && toado.y <= 0) {
		printf("thuoc phan tu mat phang so 4\n");
	}
}
double tinhKhoangCach (struct ToaDo vecto1, struct ToaDo vecto2) {
	return sqrt(pow((vecto1.x - vecto2.x),2) + pow((vecto1.y - vecto2.y),2));
}

int main () {
	int T; scanf("%d",&T);
	for (int i=0;i<T;i++) {
		struct ToaDo td1 = nhapToaDo();
		struct ToaDo td2 = nhapToaDo();
		int d; scanf("%d",&d);
		hienThiToaDo(td1,d);
		hienThiToaDo(td2,d);
		printf("Khoang cach = %.*lf",d,tinhKhoangCach(td1,td2));
		printf("\n\n");
	} 

	return 0;
}
