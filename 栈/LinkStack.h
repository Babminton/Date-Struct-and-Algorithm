//LinkStack.h
#include <iostream>
using namespace std;

typedef int ElemType;
typedef struct LNode {
	ElemType       data; //������
	struct LNode  *next; //��̽��ָ��
} LinkStNode;  //��ջ�������

			   //��ʼ������ջ
bool InitStack(LinkStNode* &S);

//����ջ��
bool StackEmpty(LinkStNode *S);

//��ջ
bool Push(LinkStNode *S, ElemType item);

//��ջ
bool Pop(LinkStNode *S, ElemType &item);

//ȡջ��
bool GetTop(LinkStNode *S, ElemType &item);

//�ͷ���ջ
void Destroy(LinkStNode* &S);
//����ջ˳�������ջ
bool TraverseStack(LinkStNode *S);
//�жϻ���
bool IsReverse(char *s);
