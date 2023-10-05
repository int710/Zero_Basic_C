#include <stdio.h>
	void nhapS(int S[],  int n) {
		int i;
		for(i=0;i<n;i++) {
			scanf("%d",&S[i]);
		}
	}
	
	void nhapQ(int Q[], int m) {
		int i;
		for(i=0;i<m;i++) {
			scanf("%d",&Q[i]);
		}
	}
	
	void SkhongQ (int S[],int n,int Q[],int m) {
		int i=0,j=0;
		while (i<=n && j<=m) {
			if(S[i] < Q[j]) {
				printf("%d ",S[i]);
				i++;
			} else if (S[i] > Q[j]) {
				j++;
			} else {
				i++;
				j++;
			}
		}
	}
	
	int main () {
		int n,m;
		int S[50],Q[50];
		scanf("%d",&n);
		nhapS(S,n);
		scanf("%d",&m);
		nhapQ(Q,m);
		SkhongQ(S,n,Q,m);
		
	return 0;	
	}
