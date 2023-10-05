#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int Data;
typedef struct Node {
    Data data;
    struct Node* pNext;
}Node;
typedef struct SingleList {
    Node* pHead;
}SingleList;

SingleList* createList();
Node* createNode(Data value);
Data inputData();
bool isEmpty(SingleList* list);
Node* getNode(SingleList* list,Data data);
Node* getLastNode(SingleList* list);

void addFirstNode(SingleList* list,Node* node);
void insertFirst(SingleList* list,Node* node);
void insertLast(SingleList* list,Node* node);
void removeNode(SingleList* list,Node* delNode);
void clearList(SingleList* list);
void printList (SingleList* list);

int main () {
    Data n;
    scanf("%d",&n);
    SingleList* list = createList();
    for (Data i=0;i<n;i++) {
        insertFirst(list,createNode(inputData()));
    }
    printList(list);

}
// Viet code cua cac ham (write code function)
SingleList* createList() { //Tạo một danh sách liên kết
    SingleList* list = (SingleList*)malloc(sizeof(SingleList));
    return list;
}
Node* createNode (Data value) { //Tạo một node mới
    Node* pNode = (Node*)malloc(sizeof(Node));
    pNode->data = value;
    pNode->pNext = NULL;
    return pNode;
}
Data inputData() { //Nhập dữ liệu cho node
    Data data;
    scanf("%d",&data);
    return data;
}
bool isEmpty(SingleList* list) { //Kiểm tra xem danh sách có rỗng không
    if(list->pHead==NULL)
        return true;
    return false;
}
void addFirstNode(SingleList* list,Node* node) { // Thêm phần tử đầu tiên
        list->pHead = node;
}
void insertFirst (SingleList* list,Node* node) { // Chèn node vào đầu
    if(list->pHead==NULL) {
        addFirstNode(list,node);
    } else {
        node->pNext = list->pHead;
        list->pHead = node;
    }
}
Node* getLastNode(SingleList* list) { // Tìm node cuối danh sách
    if(list->pHead==NULL)
        return NULL;
    Node* last = list->pHead;
    while(last->pNext!=NULL)
        last=last->pNext;
    return last;
}
void insertLast (SingleList* list, Node* node) { // thêm node vào cuối phải tìm node trước node cuối
    if(list->pHead==NULL)
        addFirstNode(list,node);
    else
    {
        Node* last = getLastNode(list);
        last->pNext = node;
        node->pNext = NULL;
    }
}
Node* getNode(SingleList* list,Data value) { // Tìm một node bất kì
    if(list->pHead==NULL)
        return NULL;
    Node* i=list->pHead;
    for(i=i;i!=NULL;i=i->pNext)
        if(i->data == value)
            return i;
    return NULL;
}
void removeNode(SingleList* list,Node* delNode) { // xóa một node bất kì tìm nốt đứng trước rồi xóa
    if(list->pHead==NULL) {
        return;
    }
    if(list->pHead == delNode) {
        list->pHead = list->pHead->pNext;
        free(DelNode);
    } else {
        Node* preDelNode = list->pHead;
        while (preDelNode->pNext != delNode)
            preDelNode=preDelNode->pNext;
        preDelNode->pNext = delNode->pNext;
        free(delNode);
    }
}
void removeList(SingleList* list) {
    while(list->pHead!=NULL)
        removeNode(list,list->pHead);
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

