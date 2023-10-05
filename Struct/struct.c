#include <stdio.h>
#include <string.h>
    
    struct sinhVien {
        char maSvien[10];
        char name[20];
        int  year;
        char gender[3];
        float score;
    };

    int main () {
            struct sinhVien student[50];
            struct sinhVien hoanDoi;

        printf("Nhap so luong sinh vien:");
        int n,i,j; scanf("%d",&n);

        // Nhap thong tin vao
        for(i=0;i<n;i++) {
            printf("Sinh vien %d, ma sinh vien:",i+1);
           scanf("%s",&student[i].maSvien);
			printf("Sinh vien %d, ho ten:",i+1);
           scanf("%s",&student[i].name);
            printf("Sinh vien %d, nam sinh:",i+1);
            scanf("%d",&student[i].year);
            printf("Sinh vien %d, gioi tinh:",i+1);
           scanf("%s",&student[i].gender);
            printf("Sinh vien %d, diem so:",i+1);
           scanf("%f",&student[i].score);
        }

        // In ra danh sach vua nhap
        printf("\n\n*********** Danh Sach ***********\n");
        for(i=0;i<n;i++) {
            printf("Sinh vien %d:\n Ma sinh vien: %s, Ho Ten: %s, Nam sinh: %d, Gioi tinh: %s, Diem KTHP: %.2f\n",i+1,student[i].maSvien,student[i].name,student[i].year,student[i].gender,student[i].score);  
        }
        
        // Sap xep lai diem so
        for(i=0;i<n-1;i++) {
            for(j=i+1;j<n;j++) {
                if(student[i].score > student[j].score) {
                    hoanDoi    = student[i];
                    student[i] = student[j];
                    student[j] = hoanDoi;
                }
            }
        }
        
        // Danh sach sau khi sap xep
       printf("\n\n======== Danh Sach ========\n");
        for(i=0;i<n;i++) {
            printf("Sinh vien %d:\n Ma sinh vien: %s, Ho Ten: %s, Nam sinh: %d, Gioi tinh: %s, Diem KTHP: %.2f\n",i+1,student[i].maSvien,student[i].name,student[i].year,student[i].gender,student[i].score);  
        }

      return 0;  
    }
