#include <stdio.h> 
	// Fucntions
	int length =0;
	void readArr(int arr[]) {
		int i=0;
		do {
			scanf("%d",&arr[i]);
			i++;
		} while (arr[i-1] != 0);
		length = i;
	}
	
	void sapXep(int arr[], int lenght) {
    int i, j;
    for(i = 0; i < length - 1; i++) {
        for(j = 0; j < length - i - 1; j++) {
            if(arr[j] < arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
	
	void printfArr(int arr[],int lenght) {
		int i;
		for(i=0;i<lenght;i++) {
			printf("%5d ",arr[i]);
		}
	}
	
	int main () {
    int i, T; scanf("%d", &T);
    int arr[50];
    for(i = 0; i < T; i++) {
        readArr(arr);
        printf("Testcase 0%d: n = %d\n", i, length);
        printf("Orig:"); printfArr(arr, length);
        sapXep(arr, length);
        printf("\nSort:"); printfArr(arr, length);
    }
    return 0;
}
