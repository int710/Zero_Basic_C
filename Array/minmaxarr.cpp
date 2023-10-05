#include <stdio.h>
// Luu y KDL cua ham isMin isMax vi dang tim trong mang so thuc nen la float nhe =))
	void nhapMang(float arr[],int n) {
		int i;
		for(i=0;i<n;i++) {
			scanf("%f",&arr[i]);
		}
	}
	// day roi nay mat 60s cuoc doi moi biet sai o dau
	float isMin (float arr[],int n) {
		int i;
		float min = arr[0];
		for(i=0;i<n;i++) {
			if(arr[i]< min) 
				min=arr[i];
		}
		return min;
	}
	
	float isMax (float arr[], int n) {
		int i;
		float max = arr[0];
		for(i=0;i<n;i++){
			if(arr[i] > max) 
				max = arr[i];
		}
		return max;
	}
	
	int main () {
		float arr[100];
		int n; scanf("%d",&n);
		nhapMang(arr,n);
		printf("Min = %.3f\n",isMin(arr,n));
		printf("Max = %.3f ",isMax(arr,n));
	}
