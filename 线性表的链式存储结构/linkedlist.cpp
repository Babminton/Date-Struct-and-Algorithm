//linkedlist.cpp
#include "linkedlist.h";
//初始化单链表
void InitList(LinkNode* &L)
{  //L为指向单链表的头指针
	L = new LinkNode;   //分配空间，作为头结点
	L->next = NULL;
}

//判表空
bool ListEmpty(LinkNode *L)
{  //L为指向单链表的头指针
	if (L->next == NULL)
		return true;   //头结点指针域为空
	else
		return false;
}

//求单链表中当前元素的个数
int ListLength(LinkNode *L)
{  //L为指向单链表的头指针
	int n = 0;
	LinkNode *p = L->next;
	while (p) {
		n++;      //计数器+1 
		p = p->next; //指针后移

	}
	return n;
}
//  遍历单链表
void  TraverseList(LinkNode *L)   //遍历单链表
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
		cout << "删除的元素不存在" << endl;
	}
	t = p->next;
	p->next = t->next;
	delete t;
	return 1;
}
//撤销单链表
void DestroyList(LinkNode* &L)
{      //L为指向单链表的头指针
	LinkNode *p;
	while (L) {
		p = L;
		L = L->next;  // 使用L指针保存下一结点的位置
		delete p;
	}
}
bool ListInsert(LinkNode *L, int pos, ElemType item)
{
	LinkNode *p = L;  int i = 0;
	while (p && i != pos - 1) { //查找pos的前驱
		p = p->next;  i++;
	}
	if (p == NULL) { //查找不成功，退出运行
		cout << "插入位置无效" << endl;
		return false;
	}
	LinkNode *t = new LinkNode;	t->data = item; //①
	t->next = p->next; //②
	p->next = t; //③
	return true;
}

