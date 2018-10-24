#include <iostream>
using namespace std;

typedef char ElemType;

typedef struct Node {
	ElemType	data;    //������	
	struct Node *lchild;
	struct Node *rchild; //������������ָ��	
}BTNode;//�������������

		//��ʼ���ն�����
void TreeInit(BTNode* &root);

//���տμ�ʾ��ͼ����һ�ö�����
void CreateBTree(BTNode* &root);

//���������Ҷ�ӽ��ĸ���
int LeafCount(BTNode *root);

//���������˫��֧���ĸ���
int TwoDegreeCount(BTNode *root);
