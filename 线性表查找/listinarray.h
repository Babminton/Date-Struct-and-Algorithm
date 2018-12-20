#include <iostream>
using namespace std;

#define MaxSize 100
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

//����������Ա�
void TraverseList(SqList L);

//��ȡ˳�����ָ��λ���ϵ�����Ԫ�� 
bool GetElem(SqList L, int pos, ElemType &item);

//�����Ա��в���Ԫ�أ����ص�һ����ָ��ֵƥ��Ԫ��λ��
int Find(SqList L, ElemType item);

//���������İ�ֵ����
bool ListInsert_order(SqList &L, ElemType item);

//˳�����
int SeqSearch(SqList L, ElemType item);

//��������۰����
int BinarySearch(SqList L, ElemType item);

//��������в���һ��Ԫ�أ������ֱ��������
int ListInsert_Binary(SqList &L, ElemType item);

