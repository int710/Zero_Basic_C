#include <stdio.h>
#include <string.h>
// Bui Thanh Quan - CT070242
    struct student {
        char name[20];
        float score;
    };

    int main() {
        struct student students[50];
        struct student diemMAX;
        struct student hoanDoi;
        // Nhap thong tin ve sinh vien
        printf("Nhap so luong sinh vien: ");
        int i,j,n; scanf("%d",&n);
        for(i=0;i<n;i++) {
                printf("Sinh vien [%d],Ho ten: ",i+1);
                scanf("%s",&students[i].name);
                printf("Sinh vien [%d], diem TB: ",i+1);
                scanf("%f",&students[i].score);
        }
		// Bat dau in danh sach
        printf("\n\n ======= DANH SACH SINH VIEN CO DIEM KHA =======\n");
        for(i=0;i<n;i++) {
            if(students[i].score >= 7 && students[i].score <8)  
                printf("\nHo Ten: %s\t Diem: %.2f",students[i].name,students[i].score);
        }
        printf("\n\n ======= DANH SACH SINH VIEN CO DIEM KEM =======\n");
        for(i=0;i<n;i++) {
            if(students[i].score < 5 && students[i].score >0)  
                printf("\nHo Ten: %s\t Diem: %.2f",students[i].name,students[i].score);
        }
        printf("\n\n ======= DANH SACH SINH VIEN CO DIEM GIOI =======\n");
        for(i=0;i<n;i++) {
            if(students[i].score >=8 && students[i].score <= 10)  
                printf("\nHo Ten: %s\t Diem: %.2f",students[i].name,students[i].score);
        }
        // Tim diem cao nhat
        diemMAX = students[0];
        for(i=0;i<n;i++) {
               if( students[i].score > diemMAX.score ) {
                   diemMAX = students[i];
               }
           }
       printf("\n\n *** Sinh vien diem TB cao nhat: %s\t Diem: %.2f", diemMAX.name, diemMAX.score);
        
        // Sap xep theo ten dung ham strcmp(thamso1,thamso2)
        for(i=0;i<n-1;i++) {
        	for(j=i+1;j<n;j++) {
        		if(strcmp(students[i].name,students[j].name)>0) {
        			hoanDoi = students[i];
        			students[i] = students[j];
        			students[j] = hoanDoi;
				}
			}
		}
        // dANH sACH sINH vIEN
         printf("\n\n ******* DANH SACH SINH VIEN *******\n");
        for(i=0;i<n;i++) {
                printf("\nHo Ten: %s\t Diem: %.2f",students[i].name,students[i].score);
        }

        return 0;
    }



