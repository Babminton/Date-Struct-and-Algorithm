//LinkStack.cpp
#include "LinkStack.h"

//��ʼ������ջ
bool InitStack(LinkStNode* &S)
{
	S = new LinkStNode;
	if (S == NULL)
	{
		cout << "��ʼ������";
		return false;
	}
	S->next = NULL;
	return true;
}

//��ջ��
bool StackEmpty(LinkStNode *S)
{
	if (S->next == NULL)
		return true;
	else
		return false;
}

//��ջ
bool Push(LinkStNode *S, ElemType item)
{ //��ͷ��㵥����ı�ͷ���뷨
	LinkStNode *t = new LinkStNode; //�������½��
	if (t == NULL) {
		cout << "����";
		return false;
	}
	t->data = item;

	//����ջ�������½��
	t->next = S->next;
	S->next = t;
	return true;
}
//��ջ
bool Pop(LinkStNode *S, ElemType &item)
{ //ɾ��������ĵ�һ��Ԫ�ؽ��
  //���ж�ջ�Ƿ�Ϊ��
	if (S->next == NULL) {
		cout << "ջ��";
		return false;
	}

	//��ɾ��ջ��Ԫ��
	LinkStNode *t = S->next;
	S->next = t->next;
	item = t->data;
	delete t;
	return true;
}

//ȡջ��
bool GetTop(LinkStNode *S, ElemType &item)
{
	//���ж�ջ�Ƿ�Ϊ��
	if (S->next == NULL) {
		cout << "ջ��";
		return false;
	}

	//��ȡջ��Ԫ��
	item = S->next->data;   //�׽��
	return true;
}

//�ͷ���ջ
void Destroy(LinkStNode* &S)
{
	LinkStNode *p;
	while (S)
	{
		p = S;
		S = S->next;
		delete p;
	}
}
//����ջ˳����� ��ջ
bool TraverseStack(LinkStNode *S) {
	LinkStNode  *p = S->next;   //p���׽��
	if (StackEmpty(S)) {
		cout << "��ջ" << endl;
		return 0;
	}
	while (p)
	{
		cout << p->data << "  ";
		p = p->next;
	}
	cout << endl;
	return 0;
}
//�жϻ���
bool IsReverse(char *s) {
	int i = 0;
	ElemType e;
	int n = strlen(s);
	LinkStNode *st;
	InitStack(st);
	for (i = 0; i < n; i++)
		Push(st, s[i]);
	for (i = 0; i < n; i++) {
		Pop(st, e);
		if (e == s[i]) {
			continue;
		}
		else {
			cout << "���ǻ���" << endl; return false;
		}
	}
	cout << "�ǻ���" << endl;
	return true;
}