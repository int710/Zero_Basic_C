#include <stdio.h>

int main () {
    FILE* f = fopen("data.txt","w+");
    int n; 
    scanf("%d",&n);
    int a[10];
    fprintf(f,"Trong file data.txt:\n");
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        fprintf(f,"%d ",a[i]);
    }
    fclose(f);
    return 0;
}

