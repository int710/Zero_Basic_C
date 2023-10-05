#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 20

typedef struct Stack {
	int data[MAX];
	int top;
}Stack;
Stack* initStack () {
	Stack* s = (Stack*)malloc(sizeof(Stack));
	s->top = -1;
	return s;
}
bool isFull (Stack* s) {
	return s->top == MAX-1;
}
bool isEmpty(Stack* s) {
	return s->top == -1;
}
int peak (Stack* s) {
	return s->data[s->top];
}
int pop (Stack* s) { // lay gia tri tren dinh va xoa
	if (isEmpty(s)) 
		printf("Stack rong, khong the peak\n");
	int value = peak(s);
	s->top--;
	return value;
}
void push (Stack* s,int value) {
	if (isFull(s)) 
		printf("Stack is full, no push");
	s->top++;
	s->data[s->top] = value;
}
void clear(Stack* s) {
	while(!isEmpty(s)) {
		printf("%d ",pop(s));
	}
	printf("\n");
}
int main () {
	Stack* s = initStack();
	int n; scanf("%d",&n);
	for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    push(s, x);
}

while (!isEmpty(s)) {
    printf("%d ", pop(s));
}
}

