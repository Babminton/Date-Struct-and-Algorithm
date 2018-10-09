//ContextTest.cpp
#include "linkedlist.h"
int main() {
	//向递增有序的单链表L中插入新的元素item，插入后单链表仍然有序。

	LinkNode *mylist;  //定义单链表
	InitList(mylist);   //初始化操作
	for (int i = 0; i<10; i++)
	{
		ListInsert(mylist, 1 + i, i + 1);

	}
	for (int i = 0; i<10; i++)
	{

		ListInsert(mylist, 11 + i, i + 20);
	}
	cout << "此时单链表的数据是";
	TraverseList(mylist);

	if (ListInsert_order(mylist, 15) == 1)
	{
		cout << "单链表的数据是：";
		TraverseList(mylist);
	}
	else cout<<"程序失败"<<endl;
	return 0;
}

