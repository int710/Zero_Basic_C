#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 50

typedef struct {
    int data[MAX];
    int top;
} Stack;

Stack* initStack() {
    Stack* s = (Stack*)malloc(sizeof(Stack));
    s->top = -1;
    return s;
}

bool isFull(Stack* s) {
    return s->top == MAX - 1;
}

bool isEmpty(Stack* s) {
    return s->top == -1;
}

int peak(Stack* s) {
    return s->data[s->top];
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop.");
        return -1;
    }
    int value = s->data[s->top];
    s->top--;
    return value;
}

void push(Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack is full. Cannot push.");
        return;
    }
    s->top++;
    s->data[s->top] = value;
}

void clear(Stack* s) {
    while (!isEmpty(s)) {
        printf("%d ", pop(s));
    }
    printf("\n");
}

void chuyenDoiCoSo(Stack* s, int cosoN) {
    int n;
    printf("Nhap so thap phan can chuyen: ");
    scanf("%d", &n);
    while (n > 0) {
        push(s, n % cosoN);
        n /= cosoN;
    }
}

void hienThiKetQua(Stack* s) {
    printf("Ket qua: ");
    while (!isEmpty(s)) {
        int digit = pop(s);
        if (digit < 10) {
            printf("%d", digit);
        } else {
            printf("%c", 'A' + (digit - 10));
        }
    }
    printf("\n");
}

int main() {
    int choice;
    Stack* s = initStack();

    do {
        printf("\nChon chuc nang:\n");
        printf("1. Chuyen mot so nguyen duong sang he 2\n");
        printf("2. Chuyen mot so nguyen duong sang he 8\n");
        printf("3. Chuyen mot so nguyen duong sang he 16\n");
        printf("4. Ket thuc\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                chuyenDoiCoSo(s, 2);
                hienThiKetQua(s);
                clear(s);
                break;

            case 2:
                chuyenDoiCoSo(s, 8);
                hienThiKetQua(s);
                clear(s);
                break;

            case 3:
                chuyenDoiCoSo(s, 16);
                hienThiKetQua(s);
                clear(s);
                break;

            case 4:
                printf("Thoat chuong trinh...\n");
                break;

            default:
                printf("Chon sai chuc nang, vui long chon lai!\n");
                break;
        }
    } while (choice != 4);
}
