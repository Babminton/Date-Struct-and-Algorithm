//linkedlist.h
#include <iostream>
using namespace std;

typedef int ElemType;  //ElemTypeΪ����Ԫ�ص���������
typedef struct LNode    //LNodeΪ���������
{
	ElemType data;      //data��������Ԫ��
	struct LNode *next; //nextΪָ����һ����ָ��
} LinkNode;  // ������������

			 //��ʼ��������
void InitList(LinkNode* &L);

//�б��
bool ListEmpty(LinkNode *L);

//�������е�ǰԪ�صĸ���
int ListLength(LinkNode *L);

//����������
void TraverseLists(LinkNode *L);

//���ص�һ����ָ��ֵƥ���Ԫ��λ��
int Find_item(LinkNode *L, ElemType item);

//��ȡ��������ָ��λ���ϵ�����Ԫ��
bool Find_pos(LinkNode *L, int pos, ElemType &item);

//�����Ա�ָ��λ�ò���һ����Ԫ��
bool ListInsert(LinkNode *L, int pos, ElemType item);

//�����Ա���ɾ��ָ��λ�õ�Ԫ��
bool ListDeletpos(LinkNode *L, int pos, ElemType &item);

//�����Ա���ɾ����һ����ָ��ֵƥ���Ԫ��
bool ListDelete(LinkNode *L, ElemType item);

//����������
void DestroyList(LinkNode* &L);

//���������ĵ�����L�в����µ�Ԫ��item�������������Ȼ����  @1 
//bool  ListInsert_order(LinkNode *L, ElemType item);    

//���������ĵ�����L�в����µ�Ԫ��item�������������Ȼ����  @2
int  ListInsert_order(LinkNode *L, ElemType item);  

//�ѵ������е������������ɾ�����������������������������������
bool Delete_max(LinkNode *L, ElemType &item);
