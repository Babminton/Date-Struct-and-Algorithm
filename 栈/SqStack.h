#include <iostream>
using namespace std;
#define MaxSize 10    //���峣��
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;
//��ʼ����˳��ջ
int InitStack(SqStack &s);
//��˳��ջ��
int StackEmpty(SqStack &S);
//��ջ
int Push(SqStack &S, ElemType item);
//��ջ
int Pop(SqStack &S, ElemType &item);
//ȡջ��
int GetTop(SqStack &S, ElemType &item);
//����ջ˳�����ջ
int TraverseStack(SqStack &S);