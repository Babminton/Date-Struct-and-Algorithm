#include "lislnArray.h"

int main()
{
	SqList my_list;//�������Ա�SqList���͵ı���
	InitList(my_list);   //��ʼ�����Ա�
	ElemType array[] = "abcde";
	for (int i = 1; i <= 5; i++)
		ListInsert(my_list, i, array[i - 1]);
	cout << "mylist�ĳ���:" << ListLength(my_list) << endl;
	cout << "mylist��Ԫ�أ�";
	TraverseList(my_list);
	if (ListEmpty(my_list)) {
		cout << "my_listΪ��" << endl;
	}
	else  cout << "my_list����Ԫ��" << endl;
	ListInsert(my_list, 4, 'f');
	cout << "����mylist��Ԫ�أ�";
	TraverseList(my_list);
	ElemType x;
	ListDelete(my_list, 3, x);
	cout << "ɾ��mylist�еĵ�����Ԫ�أ�";
	TraverseList(my_list);
	cout << "��ɾ����Ԫ��ֵ�ǣ�" << x << endl;
	ElemType y;
	GetElem(my_list, 2, y);
	cout << "my_list�еڶ���Ԫ��ֵ�ǣ�" << y << endl;
	cout << "my_list�ĵ�һ��Ԫ��ֵΪb��λ���ڵ�" << Find(my_list, 'b')<<"���߼�λ��"<< endl;
	return 0;
}