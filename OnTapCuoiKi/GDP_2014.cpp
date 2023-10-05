#include <stdio.h>

int main () {
	float gdp,gdp_2014,tocdotangtruong,gdp_last_year;
	int year = 2014;
	printf("Nhap vao GDP nam 2014: ");
	scanf("%f",&gdp_2014);
	printf("Toc do tang truong kinh te (%/nam): ");
	scanf("%f",&tocdotangtruong);
	gdp = gdp_2014;
	gdp_last_year = gdp_2014;
	printf("NAM\tGDP\n");
	printf("%d\t%.2f\n",year,gdp);
	while (gdp < 2*gdp_2014) {
		year++;
		gdp = gdp_last_year + gdp_last_year * tocdotangtruong / 100;
		gdp_last_year=gdp;
		printf("%d\t%.2f\n",year,gdp);
	}
}
