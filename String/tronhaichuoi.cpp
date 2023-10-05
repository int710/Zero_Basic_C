#include <stdio.h>
#include <string.h>

void tronStr(char newStr[], char str1[], char str2[]) {
    int i1 = 0, i2 = 0;
    int len1 = strlen(str1), len2 = strlen(str2);
    int i = 0;
    while (i1 < len1 && i2 < len2) {
        if (i % 2 == 0) {
            newStr[i] = str1[i1];
            i1++;
        } else {
            newStr[i] = str2[i2];
            i2++;
        }
        i++;
    }
 
    while (i1 < len1) {
        newStr[i] = str1[i1];
        i1++;
        i++;
    }
    
    while (i2 < len2) {
        newStr[i] = str2[i2];
        i2++;
        i++;
    }
    // danh dau ket thuc sau khi da duyet cac phan tu
    newStr[i] = '\0';
}

int main() {
    char newStr[1000], str1[500], str2[500];
 	fgets(str1, 500, stdin);
	strtok(str1, "\n"); 
	fgets(str2, 500, stdin);
	strtok(str2, "\n");
    tronStr(newStr, str1, str2);
    printf("%s", newStr);
    return 0;
}

