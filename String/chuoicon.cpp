#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool kiemTraStrCon (char str[], char subStr[]) {
    int i,j;
    for (i = 0; i <= strlen(str)-strlen(subStr); i++) {
        bool strCon = true;
        for (j = 0; j < strlen(subStr); j++) {
            if (i+j < strlen(str) && subStr[j] != str[i+j]) {
                strCon = false;
                break;
            }
        }
        if (strCon) {
            return true;
        }
    }
    return false;
}

int main () {
    int T;
    scanf("%d\n", &T);
    while (T--) {
        char str1[1000];
        char str2[1000];
        fgets(str1, 1000, stdin);
        fgets(str2, 1000, stdin);
        if (kiemTraStrCon(str1, str2)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}

