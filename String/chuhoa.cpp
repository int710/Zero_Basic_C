#include <stdio.h>
// fucntion dem do dai cua string
int lenghtString(char str[]) {
	int count = 0;
	while(str[count]!='\0') {
		count++;
	} return count;
}
// fucntion bien chu thuong thanh chu hoa
void chuHoa(char str[]) {
	int i;
	for(i=0;i<lenghtString(str);i++) {
		if(str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
	}
}
int main () {
	char str[50];
	gets(str);
	printf("Hello, %s!\nWelcome to KIT!\n String Lenght = %d\n",str,lenghtString(str));
	chuHoa(str);
	printf("%s",str);
	return 0;
}
