#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// Func chuyen chu thuong thanh chu hoa
void toUpper(char str[]) {
	int i;
	for(i=0;i<strlen(str);i++) {
		if(str[i] >= 'a' && str[i]<='z') {
			str[i] -= 32;
		}
	}
}
// Cho str2 la chuoi nguoc lai voi str 1
void releaseStr(char str[],char str2[]) {
	int i;
	for(i=0;i<strlen(str);i++) {
		str2[strlen(str)-i-1] = str [i];
	}
	str2[strlen(str)] = '\0';
}
// Kiem tra xem hay chuoi co các ki tu các phan tu giong nhau khong
bool isSame (char str[],char str2[]) {
	if(strlen(str) != strlen(str2))
		return false;
	int i;
	for(i=0;i<strlen(str);i++) {
		if(str[i]!=str2[i]) {
			return false;
		}
	}
	return true;
}
bool isSymetric(char str[]) {
	char str2[1001];
	releaseStr(str,str2);
	if(isSame(str,str2)) 
		return true;
	return false;
}
int main () {
   int T; scanf("%d\n",&T);
   while (T--) {
		char str[1001];
	 	gets(str);
	 	toUpper(str);
	 	if(isSymetric(str))
	 		printf("Symmetric\n");
	 	else
	 		printf("Asymmetric\n");
}
}
