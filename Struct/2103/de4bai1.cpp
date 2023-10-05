#include <stdio.h>
int main () {
	char kiTu;
	scanf("%c",&kiTu);
	if(kiTu >=32 && kiTu <= 127) {
		if(kiTu >= 65 && kiTu <= 94) {
			printf("%c la mot chu cai IN HOA",kiTu);
		} else if (kiTu >= 95 &&  kiTu <= 123) {
			printf("%c la mot chu cai in thuong",kiTu);
		} else if (kiTu >= 48 && kiTu  <= 57) {
			printf("%c la mot chu so",kiTu);
		} else {
			printf("%c la mot ki tu khac !",kiTu);
	}
}
 	return 0;
}
