#include <stdio.h>
// Bui Thanh Quan - CT070242

void inputFile (FILE* f, float arr[]) {
	int i;
    for(i=0;i<10;i++) {
        scanf("%f ",&arr[i]);
        fprintf(f,"%.2f ",arr[i]);
    }   
}

void readFile (FILE* f, float arr[]) {
	int i;
    FILE* x = fopen("OUTPUT1.DAT","a");
    FILE* y = fopen("OUTPUT2.DAT","a");
    FILE* z = fopen("OUTPUT3.DAT","a");
    for(i=0;i<10;i++) {
        fscanf(f,"%f",&arr[i]);
        if((int)arr[i] % 3 == 0) {
            fprintf(x,"%f ",arr[i]);    
        }
        if((int)arr[i] % 3 == 1) {
            fprintf(y,"%f ",arr[i]);    
        }
        if((int)arr[i] % 3 == 2) {
            fprintf(z,"%f ",arr[i]);    
        }
    }
    fclose(x);
    fclose(y);
    fclose(z);
}


int main () {
    FILE* f = fopen("INPUT.DAT","w+");
    float arr[20];
    inputFile(f, arr);
    readFile(f, arr);
    fclose(f);
    return 0;
}

