//ContextTest.cpp
#include "linkedlist.h"
int main() {
	//向递增有序的单链表L中插入新的元素item，插入后单链表仍然有序。
	LinkNode *mylist;  //定义单链表
	InitList(mylist);   //初始化操作
	ElemType A[] = { { 101 ,85 },{ 103, 90.5 },{ 104, 73 },{ 105, 55 } };

	for (int i = 0; i<4; i++)
		ListInsert(mylist, i + 1, A[i]);
	cout << "学号 成绩" << endl;
	TraverseList(mylist);
	cout<<"请输入你想要删除的学号"<<endl;
	int x;
	int i = 1;
	cin >> x;
	while (x != '0') {
		    //记录删除的次数
		ListDeletefour(mylist, x);
		cout << "第" << i << "次" << endl;
		cout << "学号 成绩" << endl;
		TraverseList(mylist);
		if (i==4) {
			cout<<"删除完毕"<<endl;
			return 0;
		}
		i++;
		cout<<"请再次输入你想要删除的学号"<<endl;
		cin >> x;
		
	}
	DestroyList(mylist);
	return 0;
}


