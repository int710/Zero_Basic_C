#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// xoa xuong dong khi dung fgets
void xoaN(char str[]) {
	if(str[strlen(str)-1]=='\n') {
		str[strlen(str)-1] = '\0';
	}
}
bool isStrDoiXung (char str[]) {
	for (int i=0;i<strlen(str);i++) {
		if(str[i] != str[strlen(str)-i-1]) {
			return false;
		}
	}
	return true;
}
int main() {
    char str[20];
    printf("Nhap vao xau ki tu can kiem tra: ");
    fgets(str, 20, stdin);
    xoaN(str);
    if (isStrDoiXung(str)) {
        printf("Xau ki tu doi xung \n");
    } else {
    	printf("Xau ""%s"" cua ban khong doi xung: \n",str);
        for (int i = 0; i < strlen(str); i++) {
            printf("%c \n", str[i]);
        }
    }

    return 0;
}

