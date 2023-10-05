#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef int Data;
typedef struct Node { //Khai bao cau truc cua mot node
	Data data;
	struct Node* pNext;
}Node;
struct SingleList { //Kiem soat phan tu dau cua dslk
	Node* pHead;
};
Node* capPhatNode () { // Cap phat Node
	Node* pNode = (Node*)malloc(sizeof(Node));
	return pNode;
}
Node* createNode(Data value) { //Tao mot node moi
	Node* pNode = capPhatNode();
	pNode->data = value;
	pNode->pNext = NULL;
	return pNode;
}
Data nhapData() { //Nhap du lieu tu ban phim vao node
	Data t;
	scanf("%d",&t);
	return t;
}

// Danh Sach Lien Ket
SingleList* capPhatDanhSach() {
	SingleList* list = (SingleList*)malloc(sizeof(SingleList));
	list->pHead = NULL;
	return list;
}
void themPhanTuDauTien (SingleList* list,Node* pNode) {
	list->pHead = pNode;
//	pNode->pNext = NULL;
}
void themVaoDau(SingleList* list,Node* pNode) {
	if(list->pHead == NULL) {
		themPhanTuDauTien(list,pNode);
	} else {
		 pNode->pNext = list->pHead;
		list->pHead = pNode;
	}
}
//Them vao cuoi insertLast
Node* timNodeCuoi (SingleList* list)
{
    if (list->pHead == NULL)
        return NULL;
    Node* last = list->pHead;
    while(last->pNext!=NULL)
        last = last->pNext;
    return last;
}

void insertLast (SingleList* list, Node* pNode)
{
    if (list->pHead==NULL)
        themPhanTuDauTien(list,pNode);
    else
    {
        Node* last = timNodeCuoi(list);
        last->pNext = pNode;
        pNode->pNext = NULL;
    }
}
// Tìm node theo data bat ki
Node* findNodeByData(SingleList* list,Data value) {
	if(list->pHead == NULL) {
		return NULL;
	}
	Node* i = list->pHead;
	for(i=i;i!=NULL;i=i->pNext) {
		if(i->data == value)
			return i;
	}
	return NULL;
}
void addPNodesauQNode (SingleList* list,Node* qNode,Node* pNode) {
	pNode->pNext = qNode->pNext;
	qNode->pNext = pNode;
}
void xoaNode(SingleList* list,Node* delNode) {
	if(list->pHead == NULL)
		return;
	if(list->pHead == delNode) {
		list->pHead = list->pHead->pNext;
		free(delNode);
	} else {
		//Tim phan tu node truoc node can xoa
		Node* preDelNode = list->pHead;
		while(preDelNode->pNext != delNode) {
			preDelNode = preDelNode->pNext;
		}
		preDelNode->pNext = delNode->pNext;
		free(delNode);
	}
}
void xoaList (SingleList* list) {
	while (list->pHead!=NULL) {
		xoaNode(list,list->pHead);
	}
}
void printList (SingleList* list)
{
    if (list->pHead != NULL)
    {
        for (Node* i = list->pHead; i!=NULL; i=i->pNext)
        {
            printf("%d ",i->data);
        }
    }
}
int main () {
	SingleList* list = capPhatDanhSach();
	themVaoDau(list,createNode(nhapData()));
	themVaoDau(list,createNode(nhapData()));
	themVaoDau(list,createNode(nhapData()));
	insertLast(list,createNode(nhapData()));
	printList(list);
}
