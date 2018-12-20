#include "listInarray.h"

int main()
{
	ElemType Array[] = { 0,3,5,7,8,10};
	SqList my_list;
	InitList(my_list);
	for (int i = 0; i<5; i++)
		ListInsert(my_list, i + 1, Array[i]);
	TraverseList(my_list);

	int pos = BinarySearch(my_list, 7);
	if (pos == 0)
		cout << "查找失败。" << endl;
	else
		cout << "查找的元素的逻辑位置为：" << pos << endl;

	if (ListInsert_Binary(my_list, 4)== 1){
		cout<<"插入成功"<<endl;
	}
	else cout<<"插入的数据已经存在"<<endl;
	TraverseList(my_list);
	system("pause");    //程序终止设置
	return 0;
}
