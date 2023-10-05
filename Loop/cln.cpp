#include <stdio.h>
#include <math.h>
int main () {
	int n; scanf("%d",&n);
	// neu n am thi chuyen ve so duong de tim cac so hang donvi,chuc,tram,nghin
	n = abs(n);
	int dem=0;
	while (n != 0) {
		int x = n%10;
		if(x%2==0) {
			dem++;
		}
		n/=10;
	}
	printf("%d",dem);
	return 0;
}
