#include <stdio.h> 
#include <stdbool.h>

void readArr(int a[][20], int line, int colums) {
    int i, j;
    for (i = 0; i < line; i++) {
        for (j = 0; j < colums; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

bool valueArr(int a[][20], int line, int colums, int value) {
    int i, j;
    for (i = 0; i < line; i++) {
        for (j = 0; j < colums; j++) {
            if (a[i][j] == value) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int line, colums, value;
    int a[100][100];
    scanf("%d %d", &line, &colums);
    readArr(a, line, colums);
    scanf("%d", &value);
    if (valueArr(a, line, colums, value)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}

