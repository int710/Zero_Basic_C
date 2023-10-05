#include <stdio.h>

int main() {
    int i, num, trong_thuy_distance = 0,quang_duong_loser=0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            trong_thuy_distance += 10;
        }
        if(num%2!=0) {
        	quang_duong_loser = trong_thuy_distance;
		}
    }
    if (trong_thuy_distance < 50) {
        printf("Trong Thuy di duoc %dkm va khong duoi kip My Chau", quang_duong_loser);
    } else {
           printf("Trong Thuy di duoc %dkm va duoi kip My Chau", trong_thuy_distance);
	}
	return 0;
}

