//linkedlist.cpp
#include "linkedlist.h";
//��ʼ��������
void InitList(LinkNode* &L)
{  //LΪָ�������ͷָ��
	L = new LinkNode;   //����ռ䣬��Ϊͷ���
	L->next = NULL;
}

//�б��
bool ListEmpty(LinkNode *L)
{  //LΪָ�������ͷָ��
	if (L->next == NULL)
		return true;   //ͷ���ָ����Ϊ��
	else
		return false;
}

//�������е�ǰԪ�صĸ���
int ListLength(LinkNode *L)
{  //LΪָ�������ͷָ��
	int n = 0;
	LinkNode *p = L->next;
	while (p) {
		n++;      //������+1 
		p = p->next; //ָ�����

	}
	return n;
}
//  ����������
void  TraverseList(LinkNode *L)   //����������
{
	LinkNode *p = L->next;
	while (p)
	{
		cout << p->data.sid << "  " << p->data.score << endl;
		p = p->next;
	}
}
int ListDeletefour(LinkNode *L, int number)
{
	LinkNode *p = L, *t;
	while (p->next)
	{
		if (p->next->data.sid == number)  break;
		p = p->next;
	}
	if (p->next == NULL) {
		cout << "ɾ����Ԫ�ز�����" << endl;
	}
	t = p->next;
	p->next = t->next;
	delete t;
	return 1;
}
//����������
void DestroyList(LinkNode* &L)
{      //LΪָ�������ͷָ��
	LinkNode *p;
	while (L) {
		p = L;
		L = L->next;  // ʹ��Lָ�뱣����һ����λ��
		delete p;
	}
}
bool ListInsert(LinkNode *L, int pos, ElemType item)
{
	LinkNode *p = L;  int i = 0;
	while (p && i != pos - 1) { //����pos��ǰ��
		p = p->next;  i++;
	}
	if (p == NULL) { //���Ҳ��ɹ����˳�����
		cout << "����λ����Ч" << endl;
		return false;
	}
	LinkNode *t = new LinkNode;	t->data = item; //��
	t->next = p->next; //��
	p->next = t; //��
	return true;
}

