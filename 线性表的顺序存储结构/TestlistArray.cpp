#include "lislnArray.h"

int main()
{
	SqList my_List2;
	InitList(my_List2);
	char string[] = "student";   //字符型   --string 表示数组的名字
	for (int i = 1; i <= 7; i++) {
		ListInsert(my_List2, i, string[i - 1]);
	}
	cout << "my_list2：";
	TraverseList(my_List2);
	char x;
	ListDelete(my_List2,6, x);   //删除逻辑位置为6的元素值
	cout<<"删除的元素是："<<x<<endl;
	TraverseList(my_List2);

	return 0;
}