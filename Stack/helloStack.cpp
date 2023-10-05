#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 20

typedef struct Stack {
	int data[MAX];
	int top; //con tro kiem soat phan tu dinh cua stack
}Stack;

Stack* initStack ();
bool isFull(Stack*);
bool isEmpty(Stack*);
void push (Stack*, int);
int pop (Stack*);
int peak (Stack*);
void clear (Stack*);
void display (Stack*);

Stack* initStack () {
	Stack* s = (Stack*)malloc(sizeof(Stack));
	s->top = -1;
	return s;
}
bool isFull (Stack* s) {
	if(s->top == MAX-1) 
		return true;
	return false;
}
bool isEmpty(Stack* s) {
	return s->top == -1;
}
int peak (Stack* s) {
	return s->data[s->top]; // tra ve gia tri phan tu tren dinh cua mang 
}
void push (Stack* s,int value) {
	if(isFull(s)) {
		printf("Stack da full\n");
		return;
	}
	s->top++;
	s->data[s->top] = value;
}
int pop (Stack* s) {
	if(isEmpty(s)) 
		printf("Stack rong, khong the lay gia tri ra ngoai");
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
void display (Stack* s) {
	for (int i=0;i<=s->top;i++) {
		printf("%d ",s->data[i]);
	}
	printf("\n");
}
int main () {
	Stack* s = initStack();
	push(s,2);
	push(s,3);
	push(s,5);	
	push(s,7);	
	push(s,9);
	display(s);
	clear(s);
}
