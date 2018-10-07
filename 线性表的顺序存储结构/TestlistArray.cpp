#include "lislnArray.h"

int main()
{
	SqList my_list;//定义线性表SqList类型的变量
	InitList(my_list);   //初始化线性表
	ElemType array[] = "abcde";
	for (int i = 1; i <= 5; i++)
		ListInsert(my_list, i, array[i - 1]);
	cout << "mylist的长度:" << ListLength(my_list) << endl;
	cout << "mylist的元素：";
	TraverseList(my_list);
	if (ListEmpty(my_list)) {
		cout << "my_list为空" << endl;
	}
	else  cout << "my_list中有元素" << endl;
	ListInsert(my_list, 4, 'f');
	cout << "更新mylist的元素：";
	TraverseList(my_list);
	ElemType x;
	ListDelete(my_list, 3, x);
	cout << "删除mylist中的第三个元素：";
	TraverseList(my_list);
	cout << "被删除的元素值是：" << x << endl;
	ElemType y;
	GetElem(my_list, 2, y);
	cout << "my_list中第二个元素值是：" << y << endl;
	cout << "my_list的第一个元素值为b的位置在第" << Find(my_list, 'b')<<"个逻辑位置"<< endl;
	return 0;
}