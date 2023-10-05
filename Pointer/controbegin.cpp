#include <stdio.h>
	void tangN(int* p) {
		(*p)++;
		printf("Gia tri khi n trong Fucntions la: %d\n",*p);
	}
	int main () {
		int n=5;
		printf("Gia tri cua n trong ham main: %d\n",n);
		tangN(&n);
		printf("Gia tri cua n trong main sau khi tang N: %d\n",n);
	}
