#include <stdio.h>
	void inputArr (float arr[], int n) {
		int i;
		for(i=0;i<n;i++)
			scanf("%f",&arr[i]);
	} 
	
	void soLonAvg (float arr[],int n, float tb) {
		int i;
		for(i=0;i<n;i++) {
			if(arr[i] > tb)
			printf("%.2f ",arr[i]);
		}
	}
	
	int main () {
		int n,i;
		scanf("%d",&n);
		float tb=0;
		float arr[50];
		inputArr(arr,n);
		for(i=0;i<n;i++) {
			printf("%.2f ",arr[i]);
			tb+=arr[i];
		}
		tb=(float)tb/n;
		printf("\nAvg = %.3f\n",tb);
		soLonAvg(arr,n,tb);
	}
