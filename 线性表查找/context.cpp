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
		cout << "����ʧ�ܡ�" << endl;
	else
		cout << "���ҵ�Ԫ�ص��߼�λ��Ϊ��" << pos << endl;

	if (ListInsert_Binary(my_list, 4)== 1){
		cout<<"����ɹ�"<<endl;
	}
	else cout<<"����������Ѿ�����"<<endl;
	TraverseList(my_list);
	system("pause");    //������ֹ����
	return 0;
}
