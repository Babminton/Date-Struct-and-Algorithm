#include <iostream>
using namespace std;

typedef char ElemType;

typedef struct node {
	ElemType	 data;   //������	
	struct node *left;
	struct node *right;  //������������ָ��	
} BTNode; //�������������

		  //��ʼ���ն�����
void InitBTree(BTNode* &root);

//����ǰ��������н���������
void CreateBTree_Pre(BTNode* &root, ElemType Array[]);

//ǰ�����������
void PreOrder(BTNode *root);

//�������������
void InOrder(BTNode *root);

//�������������
void PostOrder(BTNode *root);

//������������
int BTreeDepth(BTNode *root);

//�ͷŶ����������н��
void ClearBTree(BTNode* &root);