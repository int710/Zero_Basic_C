#include <stdio.h>
#include <string.h>

void hoan_doi(char* ch,char* ch1) {
	char tmp = *ch;
	*ch = *ch1;
	*ch1 = tmp;
}

void reverString(char* str) {
	int i;
	for (i=0;i<strlen(str)/2;i++) {
		hoan_doi(str+i,str+strlen(str)-i-1);
	}
}

int main () {
	char str[201];
	gets(str);
	reverString(str);
	printf("%s",str);
	return 0;
}
