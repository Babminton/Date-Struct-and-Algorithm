//ContextTest.cpp
#include "linkedlist.h"
int main() {
	//���������ĵ�����L�в����µ�Ԫ��item�������������Ȼ����

	LinkNode *mylist;  //���嵥����
	InitList(mylist);   //��ʼ������
	for (int i = 0; i<10; i++)
	{
		ListInsert(mylist, 1 + i, i + 1);

	}
	for (int i = 0; i<10; i++)
	{

		ListInsert(mylist, 11 + i, i + 20);
	}
	cout << "��ʱ�������������";
	TraverseList(mylist);

	if (ListInsert_order(mylist, 15) == 1)
	{
		cout << "������������ǣ�";
		TraverseList(mylist);
	}
	else cout<<"����ʧ��"<<endl;
	return 0;
}

