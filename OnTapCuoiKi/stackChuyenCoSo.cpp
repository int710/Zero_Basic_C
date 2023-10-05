#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 50
typedef struct  {
	int data[MAX];
	int top;
}Stack;
Stack* initStack() {
	Stack* s = (Stack*)malloc(sizeof(Stack));
	s->top = -1;
	return s;
}
bool isFull (Stack* s) {
	return s->top == MAX-1;
}
bool isEmpty (Stack* s) {
	return s->top == -1;
}
int peak(Stack* s) {
	return s->data[s->top];
}
void push (Stack* s,int value) {
	if(isFull(s)) {
		printf("Stack is full cannot push");
	}
	s->top++;
	s->data[s->top] = value;
}
int pop (Stack* s) {
	if(isEmpty(s)) {
		printf("Stack is empty cannot pop");
	}
	int value = peak(s);
	s->top--;
	return value;
}
void clear (Stack* s) {
	while (!isEmpty(s)) { 
		printf("%d ",pop(s));
	}
	printf("\n");
}
void chuyenDoiCoSo (Stack* s,int coSoN) {
	int n;
	printf("Nhap vao so can chuyen: "); scanf("%d",&n);
	while (n>0) {
		push(s,n%coSoN);
		n/=coSoN;
	}
}
void hienThiKetQua (Stack* s) {
	printf("Ket qua: ");
	while(!isEmpty(s)) {
		int digit = pop(s);
		if(digit < 10) {
			printf("%d", digit);
		} else {
			printf("%c",'A'+(digit-10));
		}
	}
	printf("\n");
}
void menu() {
	printf("\t\t1. Chuyen so sang co so 2\n");
	printf("\t\t2. Chuyen so sang co so 8\n");
	printf("\t\t3. Chuyen so sang co so 16\n");
	printf("\t\t0. Ket thuc\n");
	printf("\t\tVui long chon chuc nang: ");
	
}
int  main () {
	Stack* s = initStack();
	int d;
	while (true) {
		menu();
		scanf("%d",&d);
		switch(d) {
			case 1:
				chuyenDoiCoSo(s,2);
				hienThiKetQua(s);
				break;
			case 2:
				chuyenDoiCoSo(s,8);
				hienThiKetQua(s);
				break;
			case 3:
				chuyenDoiCoSo(s,16);
				hienThiKetQua(s);
				break;
			case 0: printf("\tGoodBye :>\n");
				return 0;
				break;
			default: printf("Chuc nang dang xay dung, hien tai chi co the dung 0-3");
		}
	}
}
