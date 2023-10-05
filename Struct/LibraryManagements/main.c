#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char title[50];
    char author[50];
    int pubYear;
    float coin;
} Book;

Book addBook() {
    Book abook;
    printf("\t Ten sach: ");
    fflush(stdin);
    gets(abook.title);

    printf("\t Ten tac gia: ");
    fflush(stdin);
    gets(abook.author);

    printf("\t Nam xuat ban: ");
    scanf("%d", &abook.pubYear);

    printf("\t Gia ban: ");
    scanf("%f", &abook.coin);

    return abook;
}

int addBookToListLib(Book listBook[], int n, Book newBook) {
    listBook[n] = newBook;
    return n + 1;
}

int creatListLib(Book listBook[], int n) {
    while (1) {
        n = addBookToListLib(listBook, n, addBook());
        printf("\t Nhap Yes (y) de them tiep? ");
        char chon[10];
        fflush(stdin);
        gets(chon);
        if (strcmp(chon, "y") != 0 && strcmp(chon, "Y") != 0) {
            break;
        }
    }
    return n;
}

void infoBookByLine(Book abook) {
    printf("%5s %30s %20s %9d %.2f\n", "", abook.title, abook.author, abook.pubYear, abook.coin);
}

void showListLib(Book listBook[], int n) {
    printf("\t\t QUAN LI SACH TRONG THU VIEN\n");
    printf("%5s %30s %20s %9s %5s\n", "STT", "TITLE BOOK", "AUTHOR", "PUBLIC YEAR", "COIN");
    for (int i = 0; i < n; i++) {
        printf("%5d", i + 1);
        infoBookByLine(listBook[i]);
    }
}

int findBookByName(Book listBook[], int n, char nameFind[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(nameFind, listBook[i].title) == 0) {
            return i;
        }
    }
    return -1;
}

void editBook(Book listBook[], int n, char nameEdit[]) {
    int index = findBookByName(listBook, n, nameEdit);
    if (index < 0) {
        printf("\t Loi, khong ton tai sach nay trong thu vien !\n");
    } else {
        printf("\t Nhap lai thong tin cua sach:\n");
        listBook[index] = addBook();
        printf("\t Chuc mung, scah da duoc cap nhat thanh cong!\n");
    }
}

int deleteBook(Book listBook[], int n, char nameDelete[]) {
    int index = findBookByName(listBook, n, nameDelete);
    if (index < 0) {
        printf("\t Loi, khong ton tai sach nay trong thu vien !\n");
        return n;
    } else {
        for (int i = index; i < n - 1; i++) {
            listBook[i] = listBook[i + 1];
        }
        printf("\t Da xoa sach ra khoi thu vien !!\n");
        return n - 1;
    }
}


int main () {
    Book listBook[MAX];
    int n = 0;
    int option;
    char nameFind[50];
    char nameEdit[50];
    char nameDelete[50];

    do {
        printf("\t\tQUAN LY SACH TRONG THU VIEN\n");
        printf("\t1. Thêm sách vào thu vien\n");
        printf("\t2. Hien thi danh sách sách trong thu vien\n");
        printf("\t3. Tìm kiem sách trong thu vien theo tên\n");
        printf("\t4. Chinh sua thông tin sách trong thu vien\n");
        printf("\t5. Xóa sách khoi thu vien\n");
        printf("\t0. Thoát chuong trình\n");
        printf("\n\tVui lòng chon chuc nang: ");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                n = creatListLib(listBook, n);
                printf("\n\tThêm sách vào thu vien thành công!\n");
                break;
            case 2:
                showListLib(listBook, n);
                break;
            case 3:
                printf("\n\tNhap tên sách can tìm kiem: ");
                fflush(stdin);
                gets(nameFind);
                int index = findBookByName(listBook, n, nameFind);
                if (index < 0) {
                    printf("\n\tKhông tìm thay sách có tên \"%s\" trong thu vien!\n", nameFind);
                } else {
                    printf("\n\tTìm thay sách có tên \"%s\" trong thu vien tai vi trí %d\n", nameFind, index+1);
                    infoBookByLine(listBook[index]);
                }
                break;
            case 4:
                printf("\n\tNhap tên sách can chinh sua: ");
                fflush(stdin);
                gets(nameEdit);
                editBook(listBook, n, nameEdit);
                break;
            case 5:
                printf("\n\tNhap tên sách can xóa: ");
                fflush(stdin);
                gets(nameDelete);
                n = deleteBook(listBook, n, nameDelete);
                break;
            case 0:
                printf("\n\tCam on ban dã su dung chuong trình quan lý thu vien!\n");
                break;
            default:
                printf("\n\tLoi, vui long chon lai!\n");
                break;
        }
        
    } while (option != 0);

    return 0;
}


