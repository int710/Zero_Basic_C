#include <stdio.h>
#include <stdbool.h>
    void nhapArr(int arr[],int n) {
    	int i;
        for(i=0;i<n;i++) {
//            printf("Nhap vao arr[%d]: \n",i);
            scanf("%d", &arr[i]);
        }
    }
    void xuatArr(int arr[],int n) {
    	int i;
        for(i=0;i<n;i++) {
            printf("%d ",arr[i]);
        }
    }
    bool kTra (int arr[],int n,int value) {
    	int i;
        for(i=0;i<n;i++) {
            if(arr[i] == value) 
                return true;
            }
        return false;
    }

    int main () {
        int arr[100];
        int n; scanf("%d",&n);
        nhapArr(arr,n);
        xuatArr(arr,n);
        
//        printf("\n Nhap value kiem tra:");
        int value; scanf("%d",&value);

        if(kTra(arr,n,value)) {
            printf("Yes");
        } else {
            printf("No");
        }
    return 0;
    }
