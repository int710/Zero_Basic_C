#include <stdio.h> 
	void nhapMangS(int S[], int n){
		int i;
		for(i=0;i<n;i++) {
			scanf("%d",&S[i]);
		}
	}
	void nhapMangQ(int Q[], int m){
		int i;
		for(i=0;i<m;i++) {
			scanf("%d",&Q[i]);
		}
	}
	void soSanh(int S[],int n,int Q[],int m) {
		int i=0,j=0;
		while (i < n && j < m) {
			if(S[i] < Q[j]) {
				printf("%d ",S[i]);
				i++;
			} else if(S[i] > Q[j]) {
				j++;
			} else {
				i++;
				j++;
			}
		}
		while(i<m) {
			printf("%d  ", S[i]);
		}

}

int main () {
	int S[100],Q[100];
	int n,m;
	scanf("%d",&n);
	nhapMangS(S,n);
	scanf("%d",&m);
	nhapMangQ(Q,m);
	soSanh(S,n,Q,m);
	return 0;
}
