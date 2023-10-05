#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
	char hoTen[20];
	int namSinh;
	float diemTB;	
} SinhVien;

SinhVien nhapThongTinSV (){
	SinhVien sv;
		printf("\tNhap ho ten: ");
		fflush(stdin);
		gets(sv.hoTen);
		printf("\tNhap nam sinh: ");
		scanf("%d",&sv.namSinh);
		printf("\tNhap diem TB: ");
		scanf("%f",&sv.diemTB);
	return sv;
}

void hienThiThongTinSVTheoDong (SinhVien sv) {
	printf("%20s%10d%9.2f\n",sv.hoTen,sv.namSinh,sv.diemTB);
}
int themSinhVienVaoDanhSach (SinhVien students[],int n,SinhVien sv) {
	students[n] = sv;
	return n+1;
}
int taoDanhSachSinhVien (SinhVien students[],int n) {
	while (true) {
		n = themSinhVienVaoDanhSach(students,n,nhapThongTinSV());
		printf("Tiep tuc them? (y neu co): ");
		char chon;
		fflush(stdin);
		scanf("%c",&chon);
		if (chon != 'y' && chon != 'Y') {
			break;
		}
	}
	return n;
}
void hienThiDanhSachSV (SinhVien students[],int n) {
	printf("\t\tDANH SACH SIEN VIEN\n");
	printf("\t%5s%20s%10s%9s\n","STT","HO TEN","NAM SINH","DIEM TB");
	for (int i=0;i<n;i++) {
		printf("\t%5d",i+1);
		hienThiThongTinSVTheoDong(students[i]);
	}
}
int findStudentByName (SinhVien students[],int n,char nameFind[]) {
	for (int i=0;i<n;i++) {
		if(strcmp(nameFind,students[i].hoTen)==0) {
			return i;
		}
	}
	return -1;
} // function tim kiem sinh vien theo ten

void editStudentsByName (SinhVien students[],int n,char nameEdit[]) {
	int index = findStudentByName(students,n,nameEdit);
	if (index < 0) 
		printf("\tKhong tim thay sinh vien: %s\n",nameEdit);
	else 
		printf("\tNhap thong tin moi cua sinh vien\n");
		students[index]=nhapThongTinSV();
}
int deleteStudentsByName(SinhVien students[],int n,char nameDel[]) {
	int index = findStudentByName(students,n,nameDel);
	if (index < 0) {
		printf("\tKhong tim thay sinh vien: %s\n",nameDel);
		return n;
	}
	else {
		while (index < n-1) {
			students[index] = students[index+1];
			index++;
		}
		printf("Da xoa sinh vien %s khoi danh sach !\n",nameDel);
		return n-1;
	}
}

int main () {
	SinhVien students[MAX];
	int n=0;
	n = taoDanhSachSinhVien(students,n);
	hienThiDanhSachSV(students,n);
	
	char hoTen[MAX];
	printf("Nhap ho ten can sua: ");
	fflush(stdin);
	gets(hoTen);
	editStudentsByName(students,n,hoTen);
	hienThiDanhSachSV(students,n);
	
	printf("Nhap ho ten can xoa: ");
	fflush(stdin);
	gets(hoTen);
	n = deleteStudentsByName(students,n,hoTen); // update lai gia tri n khi dung func
	hienThiDanhSachSV(students,n);
	
	return 0;
}
