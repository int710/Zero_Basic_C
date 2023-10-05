#include <stdio.h>
#include <stdbool.h>

	bool isLeapYear(int year) {
		// Neu nam nhuan tra ve 1 !namnhuan return 0;
		return (year % 4 == 0 && year % 100 != 0 || year % 400 ==0);
	}
	void nextDMY(int* day,int* month,int* year) {
		int ngay[] = {31,28 + isLeapYear(*year),31,30,31,30,31,31,30,31,30,31};
		// mang chua so ngay cac thang 1-12 rieng thang 2 neu nam nhuan +1 != namnhuan +0
		int maxDay = ngay[*month-1];
		*day+=1;
		if(*day>maxDay) {
			*day = 1;
			*month+=1;
		}
		if(*month>=12) {
			*month = 1;
			*year+=1;
		}
	}
	int main () {
		int d,m,y;
		scanf("%d%d%d",&d,&m,&y);
		printf("Ngay hien tai: %d/%d/%d\n",d,m,y);
		nextDMY(&d,&m,&y);
		printf("Ngay ke tiep: %d/%d/%d",d,m,y);
		return 0;
	}
