#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
#include <conio.h>

typedef struct Student {
    char hoTen[30];
    int age;
    float diemTB;
} Student;
typedef struct Node{
    Student data;
    struct Node* pNext;
} Node;
typedef struct {
    Node* pHead;
}SList;

Student addSinhVien () {
    Student sv;
    printf("\tNhap ten sinh vien: ");
    fflush(stdin);
    gets(sv.hoTen);
    printf("\tTuoi: ");
    scanf("%d",&sv.age);
    printf("\tDiem TB: ");
    scanf("%f",&sv.diemTB);
    return sv;
}
Node* createSinhVien (Student sinhvien) {
    Node* pNode = (Node*)malloc(sizeof(Node));
    pNode->data = sinhvien;
    pNode->pNext = NULL;
    return pNode;
}
SList* createListStudent () {
    SList* list = (SList*)malloc(sizeof(SList));
    list->pHead = NULL;
    return list;
}
void themPhanTuDauTien (SList* list,Node* node) {
    list->pHead = node;
}
void themVaoDau (SList* list,Node* node) {
    if (list->pHead==NULL) {
        themPhanTuDauTien(list,node);
    }else {
        node->pNext = list->pHead;
        list->pHead = node;
    }
}
void hienThiSinhVien (Student sinhvien) {
    printf("%20s%10d%10.2f\n",sinhvien.hoTen,sinhvien.age,sinhvien.diemTB);
}
void hienThiDanhSach (SList* list) {
    printf("\t\tDANH SACH SINH VIEN");
    printf("\t%5d%20s%10s%10s","STT","HO TEN","TUOI","DIEM TB");
    int stt=1;
    Node* i=list->pHead;
    for(i=i;i!=NULL;i=i->pNext) {
        printf("%5d",stt++);
        hienThiSinhVien(i->data);
    }
}
Node* timNodeTheoTenSinhVien (SList* list,char* hoTen) {
    if(list->pHead==NULL) {
        return NULL;
    } else {
        Node* i = list->pHead;
        while (i!=NULL) {
            if(strcmp(i->data.hoTen,hoTen)==0) {
                return i;
            }
            i=i->pNext;
        }
    return NULL;
    }
}
void themPNodeSauQNode (SList* list,Node* qNode,Node* pNode) {
    qNode->pNext = qNode->pNext;
    qNode->pNext = qNode;
}
Node* getLastNode(SList* list) { // tim node cuoi
    if (list->pHead==NULL) {
        return NULL;
    }
    Node* last = list->pHead;
    while(last->pNext!=NULL)
        last=last->pNext;
    return last;
}
void themVaoCuoi (SList* list,Node* node) {
    if(list->pHead==NULL) {
        themPhanTuDauTien(list,node);
    } else {
        Node* last = getLastNode(list);
        last->pNext = node;
        node->pNext = NULL;
    }
}
void xoaNode (SList* list,Node* delNode) {
    if(list->pHead==NULL) {
        return;
    }
    if(list->pHead==delNode) {
        list->pHead=list->pHead->pNext;
        free(delNode);
    } else {
        Node* predelNode = list->pHead;
        while(predelNode!=delNode) {
            predelNode = predelNode->pNext;
        }
        predelNode->pNext = delNode->pNext;
        free(delNode);
    }
}
void clearList (SList* list) {
    while(list->pHead!=NULL) {
        xoaNode(list,list->pHead);
    }
}
SList* taoDanhSach(int n) {
    SList* list = createListStudent();
    for(int i=1;i<=n;i++) {
        printf("\tNhap Thong tin sinh vien %d: \n",i);
        themVaoCuoi(list,createSinhVien(addSinhVien()));
    }
}
void printMenu () {
    printf("\t\tMENU CHUC NANG\n");
    printf("\t1. Tao danh sach sinh vien\n");
    printf("\t2. Hien thi danh sach sinh vien\n");
    printf("\t3. Chen them sinh vien\n");
    printf("\t4. Xoa sinh vien theo ten\n");
    printf("\t5. Sua sinh vien theo ten\n");
    printf("\t0. Thoat\n");
    printf("Vui long chon: ");
}
int main () {
    SList* list = createListStudent();
    while (true) {
        //Hien thi menu
        printMenu();
        //Cho nguoi dung chon
        int chon;
        scanf("%d",&chon);
        system("cls");
        // Chay code theo lua chon
        switch(chon) {
            case 1: {
                printf("\tBan da chon tao danh sach sinh vien\n");
                printf("\tNhap so luong sinh vien");
                int t; scanf("%d",&t);
                clearList(list);
                list = taoDanhSach(t);
                break;
            }
            case 2: {
                hienThiDanhSach(list);
                break;
            }
            case 3: {
                printf("\tNhap ho ten sinh vien truoc vi tri muon chen");
                char hoTen[30];
                fflush(stdin);
                gets(hoTen);
                if(!timNodeTheoTenSinhVien(list,hoTen)) {
                    printf("\tKhong tim thay %s\n",hoTen);
                } else {
                    printf("\tNhap thong tin sinh vien can them:\n");
                    themPNodeSauQNode(list,createSinhVien(addSinhVien()),timNodeTheoTenSinhVien(list,hoTen));
                    printf("\tDone !");
                }
                break;
            }
            case 4: {
                printf("\tNhap ho ten sinh vien can xoa");
                char hoTen[30];
                fflush(stdin);
                gets(hoTen);
                if(!timNodeTheoTenSinhVien(list,hoTen)) {
                    printf("\tKhong tim thay %s\n",hoTen);
                } else {
                    xoaNode(list,timNodeTheoTenSinhVien(list,hoTen));
                    printf("\tDa xoa xong !\n");
                }
                break;
            }
            case 5:  {
                printf("\tNhap ho ten sinh vien can sua:");
                char hoTen[30];
                fflush(stdin);
                gets(hoTen);
                if(!timNodeTheoTenSinhVien(list,hoTen)) {
                    printf("\tKhong tim thay %s\n",hoTen);
                } else {
                    printf("\tNhap lai thong tin\n");
                    Student sv = addSinhVien();
                    timNodeTheoTenSinhVien(list,hoTen)->data = sv;
                }
                break;
            }
            case 6: {
                printf("\tGOOD BYE");
            }
            default:
                printf("Loi khong co lua chon phu hop, vui long xem lai menu");
                return 0;
        }
        printf("\tNhap phim bat ki de ve menu\n");
        getch();
        system("cls");
    }

}
