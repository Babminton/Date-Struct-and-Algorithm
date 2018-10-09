//ContextTest.cpp
#include "linkedlist.h"
int main() {
	LinkNode *mylist;  //定义单链表
	InitList(mylist);   //初始化操作
  //头插法 --与原来的数据输出相反
	for (int i = 0; i < 4; i++)
	{
		ListInsert(mylist, 1, 'a' + i);
	}
	//   尾插法--与原来的数据，输出相同
	for (int i = 0; i < 4; i++)
	{
		ListInsert(mylist, i + 1, 'a' + i);
	}

	TraverseList(mylist);

	if (ListEmpty(mylist) != true)
	{
		cout << "单链表不为空，长度：" << ListLength(mylist) << endl;
		cout << "表中数据是";
		TraverseList(mylist);
	}
	else  cout << "单链表为空" << endl;

	ElemType x;
	Find_pos(mylist, 3, x);
	cout << "第三个元素是" << x << endl;
	ListInsert(mylist, 3, 'f');
	cout << "在第3个位置插入f 后单链表的数据是：";
	TraverseList(mylist);
	ElemType y;
	ListDeletpos(mylist, 2, y);
	cout << "删除第2个位置的值：" << y << endl;
	cout << "此时单链表的数据是：";
	TraverseList(mylist);

	cout << "输入你想删除的元素,输入0表示跳转到另一个程序" << endl;
	char z;
	cin >> z;
    while (z != '0') {
			if (ListDelete(mylist, z)) {
				cout << z<<"-删除成功" << endl;
			}
			else  cout << "删除失败、没有此元素" << endl;

			cout << "请再次输入你想删除的元素，输入0表示跳转到另一个程序" << endl;
			cin >> z;
		
	} 
	while(z =='0' ) {
		cout<<"输入你想知道的数值的位置，当输入1--就结束程序"<<endl;
		char p;
		cin >> p;
		while (p!='1') {
			cout << "数值的位置是：" << Find_item(mylist, p) << endl;
			cout << "请再次输入你想知道的元素"<<endl;
			cin >> p;

		}
		DestroyList(mylist);
		return 0;
	}
	
	
}