#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

#define SAP_XEP_DIEM_TOAN 1
#define SAP_XEP_DIEM_LY 2
#define SAP_XEP_DIEM_TIENGANH 3
#define SAP_XEP_DIEM_TONGDIEM 4

typedef struct {
    int sbd;
    char hoTen[25];
    float diemToan;
    float diemLy;
    float diemTA;
    float tong;
} ThiSinh;

typedef struct Node {
    ThiSinh data;
    struct Node* pNext;
}Node;
typedef struct {
    Node* pHead;
} SList;
ThiSinh nhapDuLieu () {
    ThiSinh ts;
    printf("\tNhap SBD thi sinh: ");
    scanf("%d",&ts.sbd);
    printf("\tNhap ho ten thi sinh: ");
    fflush(stdin);
    gets(ts.hoTen);
    printf("\tNhap diem Toan: ");
    scanf("%f",&ts.diemToan);
    printf("\tNhap diem Vat Ly: ");
    scanf("%f",&ts.diemLy);
    printf("\tNhap diem Tieng Anh: ");
    scanf("%f",&ts.diemTA);
    ts.tong = ts.diemToan + ts.diemLy + ts.diemTA;
    return ts;
}
Node* capPhatNode (){
   Node* pNode = (Node*)malloc(sizeof(Node));
   return pNode;
}
Node* taoNode (ThiSinh ts) {
    Node* pNode = capPhatNode();
    pNode->data = ts;
    pNode->pNext = NULL;
    return pNode;
}
SList* capPhatDanhSach () {
    SList* list = (SList*)malloc(sizeof(SList));
    list->pHead = NULL;
    return list;
}
void themPhanTuDauTien (SList* list,Node* node) {
    list->pHead = node;
}
Node* timNodeCuoi (SList* list) {
    if(list->pHead==NULL) {
        return NULL;
    } else {
    Node* last = list->pHead;
        while (last->pNext != NULL) {
            last = last->pNext;
        }
        return last;
    }
}
void themNodeDau (SList* list,Node* node) {
    if(list->pHead == NULL) {
        themPhanTuDauTien(list,node);
    } else {
        node->pNext = list->pHead;
        list->pHead = node;
    }
}
void themNodeCuoi (SList* list,Node* node) {
    if(list->pHead==NULL) {
        themPhanTuDauTien(list,node);
    } else {
        Node* last = timNodeCuoi(list);
        last->pNext = node;
        node->pNext = NULL;
    }
}
void hienThiThiSinh (ThiSinh ts) {
    // STT SBD HOTEN DiemToan DiemVatly DiemTiengAnh Tong
    printf("%6d%25s%10.2f%10.2f%10.2f%10.2f\n",ts.sbd, ts.hoTen, ts.diemToan, ts.diemLy, ts.diemTA, ts.tong);
}
void hienThiDanhSach (SList* list) {
    printf("\t\tDANH SACH DIEM THI SINH\n");
    printf("\t\t STT %6d %25s %10s %10s %10s %10s\n", "SBD", "HO TEN", "DIEM TOAN", "DIEM LY", "DIEM TIENG ANH", "TONG DIEM");
    int stt=1;
    Node* i = list->pHead;
    for (i=i; i!=NULL ; i=i->pNext) {
        printf("%5d",stt++);
        hienThiThiSinh(i->data);
    }
}
void sapXep(SList* list,int kieu) {
	if(list->pHead==NULL)
		return;
	switch(kieu) {
		case SAP_XEP_DIEM_TOAN: {
			Node* i=list->pHead;
			Node* j=i->pNext;
			for(i=i;i!=NULL;i=i->pNext) {
				for(j=j;j!=NULL;j=j->pNext) {
					if(j->data.diemToan > i->data.diemToan)	{
						ThiSinh tmp = i->data;
						i->data = j->data;
						j->data = tmp;	
					}
				}	
			}
			break;
		}
		case SAP_XEP_DIEM_LY: {
			Node* i=list->pHead;
			Node* j=i->pNext;
			for(i=i;i!=NULL;i=i->pNext) {
				for(j=j;j!=NULL;j=j->pNext) {
					if(j->data.diemLy > i->data.diemLy)	{
						ThiSinh tmp = i->data;
						i->data = j->data;
						j->data = tmp;	
					}
				}	
			}
			break;
		}
		case SAP_XEP_DIEM_TIENGANH: {
			Node* i=list->pHead;
			Node* j=i->pNext;
			for(i=i;i!=NULL;i=i->pNext) {
				for(j=j;j!=NULL;j=j->pNext) {
					if(j->data.diemTA > i->data.diemTA)	{
						ThiSinh tmp = i->data;
						i->data = j->data;
						j->data = tmp;	
					}
				}	
			}
			break;
		}
		case SAP_XEP_DIEM_TONGDIEM: {
			Node* i=list->pHead;
			Node* j=i->pNext;
			for(i=i;i!=NULL;i=i->pNext) {
				for(j=j;j!=NULL;j=j->pNext) {
					if(j->data.tong > i->data.tong)	{
						ThiSinh tmp = i->data;
						i->data = j->data;
						j->data = tmp;	
					}
				}	
			}
			break;
		}
	}
}
void inMenu () {
	printf("\t\t1. Nhap danh sach thi sinh\n");
	printf("\t\t2. Hien thi danh sach\n");
	printf("\t\t3. Sap xep theo diem\n");
	printf("\t\t0. Thoat\n");
	printf("\t\tChon chuc nang: \n");
}
void menuSapXep () {
	printf("\t\t1. Theo diem toan\n");
	printf("\t\t2. Theo diem ly\n");
	printf("\t\t3. Theo diem tieng anh\n");
	printf("\t\t4. Theo tong diem\n");
	printf("\t\t0. Quay lai\n");
	printf("\t\tChon chuc nang: ");
}

int main () {
	SList* list = NULL;
	int i,n;
	while (true) {	
		// in menu
		inMenu();
		scanf("%d",&n);
		// user chon gi
		switch (n) {
			case 1: { //Nhap danh sach
				list = capPhatDanhSach();
				printf("Nhap so luong thi sinh: ");
				int d; scanf("%d",&d);
				for(i=0;i<d;i++) {
					themNodeCuoi(list,taoNode(nhapDuLieu()));
				}
				break;
			}
			case 2: { // Hien thi danh sach
				hienThiDanhSach(list);
				break;
			}
			case 3: { // Sap xep
				menuSapXep();
				int chon;
				scanf("%d",&chon);
				switch (chon) {
					case SAP_XEP_DIEM_TOAN: {
							sapXep(list,SAP_XEP_DIEM_TOAN);
							hienThiDanhSach(list);
						break;
					}
					case SAP_XEP_DIEM_LY: {
							sapXep(list,SAP_XEP_DIEM_LY);
							hienThiDanhSach(list);
						break;
					}
					case SAP_XEP_DIEM_TIENGANH: {
							sapXep(list,SAP_XEP_DIEM_TIENGANH);
							hienThiDanhSach(list);
						break;
					}
					case SAP_XEP_DIEM_TONGDIEM: {
							sapXep(list,SAP_XEP_DIEM_TONGDIEM);
							hienThiDanhSach(list);
						break;
					}
					case 0: {
						printf("GoodBye!\n");
						break;
					}
					default: printf("\tChi duoc chon tu 0-4");
				}
				break;
			}
		}
		// code chay
	}
}
