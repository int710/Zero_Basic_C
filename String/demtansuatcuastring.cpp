#include <stdio.h> 
#include <string.h>

void toLowerStr(char str[]) {
	int i;
	for(i=0;i<strlen(str);i++) {
		if(str[i] >= 'A' && str[i] <= 'Z') {
			str[i]+=32;
		}
	}
}
int countStr(char str[],char ch) {
	int count=0;
	int i;
	for(i=0;i<strlen(str);i++) {
		if(str[i]==ch) {
			count++;
		}
	} return count;
}

int main () {
	char str[200];
	gets(str);
	// Theo bang ma ASCII ta co ki tu tu 30-126.
	toLowerStr(str);
	char ch=30;
	for(ch;ch<126;ch++) {
		if(countStr(str,ch)>0) {
			printf("%c: %d\n",ch,countStr(str,ch));
		} 
	}
	return 0;
}
