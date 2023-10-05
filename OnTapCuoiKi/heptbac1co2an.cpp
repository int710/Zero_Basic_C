#include <stdio.h>

int main () {
	float a,b,e,c,d,f;
	float det,det_x,det_y;
	printf("GHPT Bac 1 co 2 an\n");
	printf("\t\t ax + by = e\n\t\t cx + dy = f\n");
	printf("Nhap he so cua a, b, e: ");
	scanf("%f%f%f",&a,&b,&e);
	printf("Nhap he so cua c, d, f: ");
	scanf("%f%f%f",&c,&d,&f);
	
	det = a*d - b*c;
	det_x = e*d - f*b;
	det_y = a*f - e*c;
	
	if (det==0) {
		if(det_x ==0 && det_y==0) {
			printf("He phuong trinh VSN\n");
		} else {
			printf("He phuong trinh vo nghiem");
		}
	} else {
		float x = det_x/det;
		float y = det_y/det;
		printf("He phuong trinh co nghiem duy nhat la x = %f va y = %f\n",x,y);
	}
}
