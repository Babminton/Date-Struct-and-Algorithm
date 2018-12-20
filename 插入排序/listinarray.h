#include <iostream>
using namespace std;

#define MaxSize 10

typedef int ElemType;//����Ԫ������

typedef struct {
	ElemType data[MaxSize]; //������Ա�����
	int length;
} SqList;// SqListΪ�û���������Ա�����


		 //��ʼ�������Ա�
void InitList(SqList &L);

//�ж����Ա��Ƿ�Ϊ�� 
bool ListEmpty(SqList L);

//������Ա���
int ListLength(SqList L);

//�����Ա�ָ��λ�ò���һ����Ԫ��
bool ListInsert(SqList &L, int pos, ElemType item);

//�����Ա���ɾ����һ����ָ��ֵƥ���Ԫ��
bool ListDelete(SqList &L, int pos, ElemType &item);

//��ȡ˳�����ָ��λ���ϵ�����Ԫ�� 
bool GetElem(SqList L, int pos, ElemType &item);

//�����Ա��в���Ԫ�أ����ص�һ����ָ��ֵƥ��Ԫ��λ��
int Find(SqList L, ElemType item);

//����������Ա�
void TraverseList(SqList L);
