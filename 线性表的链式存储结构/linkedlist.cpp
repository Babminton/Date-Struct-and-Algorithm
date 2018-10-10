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
void TraverseLists(LinkNode *L) {
	//LΪָ�������ͷָ��
	LinkNode *p = L->next;   //p���׽��
	while (p)
	{
		cout << p->data << "  ";
		p = p->next;
	}
	cout << endl;
}

//���ص�һ����ָ��ֵƥ���Ԫ��λ��
int Find_item(LinkNode *L, ElemType item)
{  //LΪָ�������ͷָ��
LinkNode *p = L->next;
int pos = 1; //���λ��
while (p && p->data != item)
{ //�ӵ������һ����㿪ʼ˳��������н��
p = p->next;
pos++;
}
if (p) return pos; //����λ�ñ��
  else  return 0;    //����ʧ��
}

//��ȡ��������ָ��λ���ϵ�����Ԫ��
bool Find_pos(LinkNode *L, int pos, ElemType &item)
{  //LΪָ�������ͷָ��
LinkNode *p = L->next;
int i = 1; //���λ��
while (p && i != pos) {
p = p->next;  i++;
}
if (p == NULL) { //���Ҳ��ɹ����˳�����
cout << "λ����Ч" << endl;
return false;
}
item = p->data;
return true;
}

//�����Ա�ָ��λ�ò���һ����Ԫ��   
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

//�����Ա���ɾ��ָ��λ�õ�Ԫ��
bool ListDeletpos(LinkNode *L, int pos, ElemType &item)
{
LinkNode *p = L, *t;  int i = 0;
while (p->next && i != pos - 1) { //����pos��ǰ��
p = p->next;   i++;
}
if (p->next == NULL) { //���Ҳ��ɹ����˳�����
cout << "ɾ��λ����Ч" << endl;
return false;
}
t = p->next;	    //��tΪ��ɾ�����
p->next = t->next; //��ɾ��t�����ӹ�ϵ
item = t->data; //���汻ɾ������ֵ
delete t;		   //���ͷű�ɾ���
return true;
}
//�����Ա���ɾ����һ����ָ��ֵƥ���Ԫ��
bool ListDelete(LinkNode *L, ElemType item)
{
	LinkNode *p = L, *t;
	while (p->next && p->next->data != item) {
		p = p->next;
	}
	if (p->next == NULL) { //���Ҳ��ɹ����˳�����
		cout << "ɾ��Ԫ�ز�����" << endl;
		return false;
	}
	t = p->next;	    //��tΪ��ɾ�����
	p->next = t->next; //��ɾ��t�����ӹ�ϵ
	delete t;		   //���ͷű�ɾ���
	return true;
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
//���������ĵ�����L�в����µ�Ԫ��item�������������Ȼ����  
/*
bool ListInsert_order(LinkNode *L, ElemType item){
	LinkNode *p = L;   //ͷ���
	LinkNode *t = new LinkNode;   //�����ڴ�ռ�
	while (p->next && p->next->data < item) {
		p = p->next;
	}
	t->data = item;
	t->next = p->next;
	p->next = t;
	return true;
}
*/
int  ListInsert_order(LinkNode *L, ElemType item)   //@2
{
	LinkNode *p = L;   //ͷ���
	LinkNode *t = new LinkNode;   //�����ڴ�ռ�
	while (p->next&&item>p->next->data)
		p = p->next;  //�������ƶ�		
		if(p->next==NULL) {
		 t->data = item;
		 p->next = t;
		 return 1;
 }
		t->data = item;
		t->next = p->next;
		p->next = t;
		return 1;
}
//�ѵ������е������������ɾ�����������������������������������
bool Delete_max(LinkNode *L, ElemType &item) {
	LinkNode *pre, *p, *max;
	p = L; pre = L;  max = L->next;
	while (p->next) {
		if (p->next->data > max->data) {
			max = p->next;   //�����
			pre = p;
		}
		p = p->next;
	}
	if (max != NULL) {
		pre->next = max->next;
		item = max->data;
		delete max;
		return true;
	}
	return false;
}

