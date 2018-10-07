#include "lislnArray.h"

int main()
{
	SqList my_list1, my_list2;
	InitList(my_list1);  InitList(my_list2);
	for (int i = 1; i <= 5; i++) {
		ListInsert(my_list1, i, i);
		ListInsert(my_list2, i, 5 + i);
	}
	cout << "my_list1的元素是：";
	TraverseList(my_list1);
	cout << "my_list2的元素是：";
	TraverseList(my_list2);
	MergeList(my_list1, my_list2);
	cout << "合并my_list1、my_list2的元素是：";
	TraverseList(my_list1);

	return 0;
}