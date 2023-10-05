#include <stdio.h>
	int getUCLN(int a,int b) {
		int i=a;
		for( ; ;i--){
			if(a%i==0 && b%i==0) 
				break;
		} return i;
	}
	void toiGianPhanSo (int* pTuSo,int* pMauSo) {
		int ucln = getUCLN(*pTuSo,*pMauSo);
		*pTuSo/=ucln;
		*pMauSo/=ucln;
	}
	
	int main () {
		int a,b; scanf("%d%d",&a,&b);
		toiGianPhanSo(&a,&b);
		printf("%d/%d\n",a,b);
		return 0;
	}
