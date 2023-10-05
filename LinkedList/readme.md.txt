LINKED LIST - DANH SÁCH LIÊN KẾT

DSLK ĐƠN: Mỗi phần tử liên kết các phần tử đứng sau trong danh sách. Mỗi phần tử được gọi là 1 Node, mỗi Node bao gồm hai thông tin: Giá trị (data) và con trỏ *pNext trỏ tới phần tử kế tiếp
- Kiểm soát phần tử đầu DSLK *pHead (*pFirst/*pfront)
- Phần tử cuối có thể đặt *pTail hoăc không dùng thì mặc định là *pNext trỏ vào NULL

typedef Data int;
Cấu trúc 1 node:              typedef struct node {
			               Data data; //Giá trị (int)
			               struct node* pNext; // con trỏ trỏ tới node kế tiếp
		             	} Node;

Kiểm soát phần tử đầu:   typedef struct {
				          Node *pHead;
			       } TList;
Hàm nhập dữ liệu vào node: Data nhapData() {
						Data t;
						scanf("%d",&t);
						return t;
				    }
Cấp phát node: Node* capPhatNode() {
				Node *pNode = (Node*)malloc(sizeof(Node));
				return pNode;
		   }
Tạo 1 Node: Node* createNode (Data value) {
			pNode->data = value;
			pNode->pNext = NULL;
			return pNode;
		}
Tạo DSLK:  Tlist* capPhatDanhSach() {
			TList* list = (TList*)malloc(sizeof(TList));
			list->pHead = NULL;
			return list;
		}
		void themPhanTuDauTien (TList* list,Node* pNode) {
			list->pHead = pNode;
			pNode->pNext = NULL;
		}
		void themVaoDau(TList* list,Node* pNode) {
			if(list->pHead==NULL) {
				themPhanTuDauTien(list,pNode);
			else 
				pNode->next = list->pHead;
				list->pHead = pNode;
		}
Duyệt (Print) danh sách:    void PrintList(TList* list) {
						if(list->pHead == NULL) {
							printf("The list is empty!");
						      return;
						else
							while(list->pHead != NULL) {
								printf("%d ",list->pHead.data);
								list->pHead.pNext;
							}
					}

