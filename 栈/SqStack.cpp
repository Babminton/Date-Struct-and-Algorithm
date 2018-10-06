#include "SqStack.h"
//��ʼ����˳��ջ
int InitStack(SqStack &S)
{
	S.top = -1;
	return 1;
}

//��˳��ջ��
int StackEmpty(SqStack &S) {
	if (S.top == -1)
		return 1;
	else
		return 0;
}
//��ջ
int Push(SqStack &S, ElemType item) {
	if (S.top == MaxSize - 1) {
		cout << "ջ��" << endl;
		return 0;
	}
	else
		S.top++;
		S.data[S.top] = item;
	return 1;
}
//��ջ
int Pop(SqStack &S, ElemType &item) {
	if (S.top == -1) {
		cout << "ջ��" << endl;
		return false;
	}
	else
	item=S.data[S.top];
	S.top--;
	return true;
}
//ȡջ��
int GetTop(SqStack &S, ElemType &item) {
	if (S.top == -1) {
		cout << "ջ��" << endl;
		return 0;
	}
	else item = S.data[S.top];
	return 1;
}
//����ջ˳�����ջ
int TraverseStack(SqStack &S) {
	if (StackEmpty(S) == 1) {
		cout<<"ջ��"<<endl;
		return 0;
	}
	for (int i = S.top; i >= 0; i--)
		cout << S.data[i] <<" ";
	cout << endl;
	return 0;

}
