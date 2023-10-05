#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int countStr(char str[],char ch) {
	int i;
	int count=0;
	for(i=0;i<strlen(str);i++) {
		if(str[i] == ch) {
			count++;
		}
	} return count;
}

bool isApper(char str[],char ch) {
	if(countStr(str,ch) > 0) {
		return true;
	}
	return false;
}

int main () {
	char str1[500];
	char str2[500];
	gets(str1);
	gets(str2);
	char ch;
	for(ch=65;ch<=122;ch++) {
		if(isApper(str1,ch) && isApper(str2,ch))
		 printf("%c",ch);
	}
}
