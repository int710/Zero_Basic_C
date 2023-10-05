#include <stdio.h>
#include <string.h>
// Bui Thanh Quan - CT070242

struct student {
	char name[50];
	float score;
};

int main () {
	struct student students[5];
	struct student diemTBCaoNhat;
	struct student hoanDoi;
	int i,j;
	// Nhap thong tin sinh vien vao
	for(i=0;i<5;i++) {
            printf("Sinh vien [%d],Ho ten: ",i+1);
            scanf("%s",&students[i].name);
            printf("Sinh vien [%d], diem TB: ",i+1);
            scanf("%f",&students[i].score);
        }
	// in ra svien diem kha
	printf("\t DANH SACH SINH VIEN CO DIEM KHA \t\n");
        for(i=0;i<5;i++) {
        	if(students[i].score >= 7 && students[i].score < 8) {
        		printf("Full Name: %s\t Diem Trung Binh: %.2f\n",students[i].name,students[i].score);
			}
	}
	// in ra svien diem kem
	printf("\t DANH SACH SINH VIEN CO DIEM KEM \t\n");
        for(i=0;i<5;i++) {
        	if(students[i].score >= 0 && students[i].score < 5) {
        		printf("Full Name: %s\t Diem Trung Binh: %.2f\n",students[i].name,students[i].score);
			}
	}
	// in ra svien diem gioi
	printf("\t DANH SACH SINH VIEN CO DIEM GIOI \t\n");
        for(i=0;i<5;i++) {
        	if(students[i].score >= 8 && students[i].score <= 10) {
        		printf("Full Name: %s\t Diem Trung Binh: %.2f\n",students[i].name,students[i].score);
			}
	}
	// tim sinh vien co diem trung binh cao nhat
	diemTBCaoNhat = students[0];
	for(i=0;i<5;i++) {
		if(students[i].score > diemTBCaoNhat.score)
			diemTBCaoNhat = students[i];
	}
	printf("\n\t DIEM CAO NHAT, Sinh vien: %s, Diem: %.2f\n\n",diemTBCaoNhat.name,diemTBCaoNhat.score);

	// Sap xep danh sach theo ho va ten dua vao bubble sort
	for(i=0;i<5-1;i++) {
		for(j=0;j<5-i-1;j++) {
			if(strcmp(students[j].name,students[j+1].name)>0) {
				hoanDoi = students[j];
				students[j] = students[j+1];
				students[j+1] = hoanDoi;
			}
		}
	}
	// in ra danh sach sau khi da sap xep theo thu tu a-z
         printf("\t DANH SACH SINH VIEN \n");
        for(i=0;i<5;i++) {
                printf("\nHo Ten: %s\t Diem: %.2f",students[i].name,students[i].score);
        }

	return 0;
}
