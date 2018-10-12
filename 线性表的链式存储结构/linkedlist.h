//linkedlist.h
#include <iostream>
using namespace std;

struct ElemType      
{
	int sid;
	float score;
};

typedef struct LNode    //LNodeΪ���������
{
	ElemType data;      //data��������Ԫ��
	struct LNode *next; //nextΪָ����һ����ָ��
} LinkNode;     // ������������
//��ʼ��������
void InitList(LinkNode* &L);
//�б��
bool ListEmpty(LinkNode *L);
//�������е�ǰԪ�صĸ���
int ListLength(LinkNode *L);
//����������
void TraverseList(LinkNode *L);
//ɾ��ѧ��Ϊnumber�Ľ��
int ListDeletefour(LinkNode *L, int number);
void DestroyList(LinkNode* &L);
bool ListInsert(LinkNode *L, int pos, ElemType item);
