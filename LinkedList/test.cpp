#include <stdio.h>
#include <stdlib.h>
typedef int Data;
typedef struct Node { // Cau truc node
	Data data;
	Node* pNext;
}Node;
typedef struct SingleList { // Quan li node dau tien
	Node* pHead;
};
Node* capPhatNode () { // Cap phat cho node
	Node* pNode = (Node*)malloc(sizeof(Node));
	return pNode;
}
Node* createNode (Data data) { //Tao mot node
	Node* pNode = capPhatNode();
	pNode->data = data;
	pNode->pNext = NULL;
	return pNode;
}
Data nhapData() {
	Data data;
	scanf("%d",&data);
	return data;
}

// Danh Sach Lien Ket
SingleList* capPhatDanhSach() {
	SingleList* list = (SingleList*)malloc(sizeof(SingleList));
	list->pHead=NULL;
	return list;
}
	// Them Vao Dau//
void themPhanTuDauTien (SingleList* list,Node* pNode) {
	list->pHead=pNode;
}
void themVaoDau(SingleList* list,Node* pNode) {
	if (list->pHead==NULL) {
		themPhanTuDauTien(list,pNode);
	} else {
		pNode->pNext=list->pHead;
		list->pHead=pNode;
	}
}
	//Them vao cuoi danh sach lien ket//
Node* timNodeCuoi (SingleList* list) {
	if(list->pHead==NULL)
		return NULL;
	Node* last = list->pHead;
	while(last!=NULL) {
		last=last->pNext;
	}
	return last;
}
void insertLast (SingleList* list,Node* pNode) {
	if(list->pHead == NULL) {
		themPhanTuDauTien(list,pNode);
	} else {
		Node* last = timNodeCuoi(list);
		last->pNext = pNode;
		pNode->pNext = NULL;
	}
}
	//Tim  mot node theo data
Node* findNodeByData (SingleList* list,Data value) {
	if(list->pHead=NULL)
		return NULL;
	Node* i = list->pHead;
	for (i=i;i!=NULL;i++) {
		if(i->data==value)
			return i;
		}
	return NULL;
} 
void addPNodesauQNode (SingleList* list,Node* pNode,Node* qNode) {
	pNode->pNext = qNode->pNext;
	qNode->pNext = pNode;
}
void xoaNode (SingleList* list,Node* delNode) {
	if(list->pHead==NULL)
		return NULL;
	if(list->pHead == delNode) {
		pHead = pHead->pNext;
		free(delNode);
	} else {
		Node* preDelNode = list->pHead;
		while(preDelNode->pNext != delNode) {
			preDelNode=preDelNode->pNext;
		}
		preDelNode->pNext = delNode->pNext;
		free(delNode);
	}
}
void xoaList(SingleList* list) {
	while(list->pHead!=NULL)
		xoaNode(list,list->pHead);
}
void printList(SingleList* list) {
	if(list->pHead!=NULL) 
		for(Node* i=list->pHead;i!=NULL;i=i->pNext)
			printf("%d ",i->data);
}
int main () {
	SingleList* list = capPhatDanhSach();
	themVaoDau(list,createNode(nhapData()));
	themVaoDau(list,createNode(nhapData()));
	themVaoDau(list,createNode(nhapData()));
	insertLast(list,createNode(nhapData()));
	printList(list);
}
