#include <stdio.h>
#include <string.h>

void toText(char str[]) {
    int i;
    for(i=0;i<strlen(str);i++) {
        if(str[i]>= 'a' && str[i] <= 'z') {
            str[i]-=32;
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
    char str[10001];
    gets(str);
    char ch;
    scanf("%c",&ch);
    toText(str);
    if(ch>='a' && ch <= 'z') {
    	ch-=32;
	}
    printf("%d",countStr(str,ch));
}

