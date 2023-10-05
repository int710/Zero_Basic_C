#include <stdio.h>
#define MAX 50
    void readArr(int arr[],int n,int index[]) {
        for(int i=0;i<n;i++) {
            scanf("%d",&arr[i]);
            index[i] = i;
        }
    }
    void printfArr(int arr[],int n) {
        for(int i=0;i<n;i++) {
            printf("%5d ", arr[i]);
        }
    } 
    void bubblesortArr(int arr[],int n,int index[]) {
        for(int i=0;i<n-1;i++) {
            for(int j=0;j<n-i-1;j++) {
                if(arr[j] > arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                tmp = index[j];
                index[j] = index[j+1];
                index[j+1] = tmp;
            }
            }
        }
    }
    
    int main () {
        int arr[MAX];
        int index[MAX];
        int n; scanf("%d",&n);
        readArr(arr,n,index);
        for(int i=0;i<n;i++) {
        printf("%5d ",i); }
         printf("\n"); 
        printfArr(arr,n);
        bubblesortArr(arr,n,index);
        printf("\n");
        printfArr(arr,n);
        printf("\n");
        for(int i=0;i<n;i++) {
            printf("%5d ",index[i]);
        }
    }
