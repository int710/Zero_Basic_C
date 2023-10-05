#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int *arr = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = n;
    int *uniqueArr = (int*) malloc(n * sizeof(int));
    int uniqueCount = 0;
    
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == uniqueArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            uniqueArr[uniqueCount++] = arr[i];
        } else {
            count--;
        }
    }
    
    printf("The original array contains %d member(s): ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nThe new array contains %d member(s): ", count);
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", uniqueArr[i]);
    }
    
    free(arr);
    free(uniqueArr);
    return 0;
}

