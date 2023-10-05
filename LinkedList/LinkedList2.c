#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node {
    int data;
    struct Node* pNext;
} Node;
typedef struct SList {
    Node* pHead;
} SList;
Node* createNode (int data) {
    Node* pNode = (Node*)malloc(sizeof(Node));
    pNode->data = data;
    pNode->pNext=NULL;
    return pNode;
}
SList* listMerge (SList* list1, SList* list2) {
        // Khỏi tạo list mới và nhập node đầu tiên
        SList* listMerge = (SList*)malloc(sizeof(SList));
        Node* pFirst1 = list1->pHead;
        Node* pFirst2 = list2->pHead;
        if (pFirst1->data < pFirst2->data) {
            listMerge->pHead = pFirst1;
            pFirst1 = pFirst1->pNext;
        } else {
            listMerge->pHead = pFirst2;
            pFirst2 = pFirst2->pNext;
        }
        Node* pfirstMerge = listMerge->pHead;// Khỏi tạo con trỏ của phần tử đầu mảng ghép
        // Tiếp tục thêm
        while (pFirst1 != NULL && pFirst2 != NULL) {
                if (pFirst1->data < pFirst2->data) {
                        pfirstMerge->pNext = pFirst1;
                        pFirst1 = pFirst1->pNext;
                } else {
                        pfirstMerge->pNext = pFirst2;
                        pFirst2 = pFirst2->pNext;
                }
                pfirstMerge=pfirstMerge->pNext;
        }


        // Nếu đã hết list 1 hoặc 2 thì code sau thực hiện
        if(pFirst1 == NULL) {
            pfirstMerge->pNext = pFirst2;
        } else {
            pfirstMerge->pNext = pFirst1;
        }
        // Giải phóng bộ nhớ ban đầu
        free(list1);
        free(list2);
  return listMerge;
}


int main() {
    int n, m;
    scanf("%d", &n);
    SList* list1 = (SList*)malloc(sizeof(SList));
    list1->pHead = NULL;

    Node* pCur1 = NULL;
    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);
        Node* pNode = createNode(value);
        if (list1->pHead == NULL) {
            list1->pHead = pNode;
        } else {
            pCur1->pNext = pNode;
        }
        pCur1 = pNode;
    }

    scanf("%d", &m);

    SList* list2 = (SList*)malloc(sizeof(SList));
    list2->pHead = NULL;

    Node* pCur2 = NULL;
    for (int i = 0; i < m; i++) {
        int value;
        scanf("%d", &value);
        Node* pNode = createNode(value);
        if (list2->pHead == NULL) {
            list2->pHead = pNode;
        } else {
            pCur2->pNext = pNode;
        }
        pCur2 = pNode;
    }

    SList* listMerge = listMerge(list1,list2);

    // In ra kết quả
    Node* pNode = listMerge->pHead;
    while (pNode != NULL) {
        printf("%d ", pNode->data);
        pNode = pNode->pNext;
    }


    // Giải phóng bộ nhớ
    Node* pNext = NULL;
    pNode = list1->pHead;
    while (pNode != NULL) {
        pNext = pNode->pNext;
        free(pNode);
        pNode = pNext;
    }
    free(list1);

    pNext = NULL;
    pNode = list2->pHead;
    while (pNode != NULL) {
        pNext = pNode->pNext;
        free(pNode);
        pNode = pNext;
    }
    free(list2);

    pNode = listMerge->pHead;
    while (pNode != NULL) {
        pNext = pNode->pNext;
        free(pNode);
        pNode = pNext;
    }
    free(listMerge);

    return 0;
}
