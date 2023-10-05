#include <stdio.h>
#include <math.h>

int main () {
	double s;
	scanf("%lf",&s);
	double tien=0;
	int tienlamtron=0;
	if(s>0 && s<= 0.8) {
		tien = 10000;
	} else if ( s> 0.8 && s <= 30) {
		tien = 10000 + ((s-0.8)*11000);
	} else if (s > 30) {
		tien =  10000 + 30*11000 + 10000*(s-30.8);
	}
	tienlamtron = round(tien/1000)*1000;
	printf("%d",tienlamtron);
	return 0;
}
