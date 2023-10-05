#include <stdio.h>
#include <stdbool.h>

    int nhapMang(int arr[]) {
        int n=0;
        while (true) {
            scanf("%d",&arr[n]);
            if(arr[n]==0) 
                break;
            n++;
        }
        return n;
    }
    
    void inMang(int arr[],int n) {
        int i;
        for(i=0;i<n;i++) {
            printf("%d ", arr[i]);
        } printf("\n");
    }
    
    bool mangTD (int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
     }
     return true;
    }
    bool mangGD (int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            return false;
        }
    }
    return true;
    }
    
    
    int main () {
        int mang[100];
        int T; scanf("%d",&T);
        for(int i=0;i<T;i++) {
            int n = nhapMang(mang);
            printf("Testcase %d: ",i);
            if(mangTD(mang,n))
                printf("Sorted ascending\n");
            else if (mangGD(mang,n)) 
                printf("Sorted descending\n");
            else 
            printf("Unsorted\n");
        }
        return 0;
    }
