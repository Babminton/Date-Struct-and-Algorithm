//ContextTest.cpp
#include "linkedlist.h"
int main() {
	//向递增有序的单链表L中插入新的元素item，插入后单链表仍然有序。

	LinkNode *mylist;  //定义单链表
	InitList(mylist);   //初始化操作

	ElemType nums[] = { 2, 9, 5, 7 };
	for (int i = 1; i <= 4; i++)
		ListInsert(mylist, i, nums[i - 1]);

	cout << "序列为：";
 	TraverseLists(mylist);
	ElemType temp;
	if (Delete_max(mylist, temp)) {
		cout << "删除的最大值为：" << temp << endl;
		cout << "删除后的元素为：";
		TraverseLists(mylist);
	}
	return 0;
	//程序错误

}
