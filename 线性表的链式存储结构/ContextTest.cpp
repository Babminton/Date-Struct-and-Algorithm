//ContextTest.cpp
#include "linkedlist.h"
int main() {
	//���������ĵ�����L�в����µ�Ԫ��item�������������Ȼ����

	LinkNode *mylist;  //���嵥����
	InitList(mylist);   //��ʼ������

	ElemType nums[] = { 2, 9, 5, 7 };
	for (int i = 1; i <= 4; i++)
		ListInsert(mylist, i, nums[i - 1]);

	cout << "����Ϊ��";
 	TraverseLists(mylist);
	ElemType temp;
	if (Delete_max(mylist, temp)) {
		cout << "ɾ�������ֵΪ��" << temp << endl;
		cout << "ɾ�����Ԫ��Ϊ��";
		TraverseLists(mylist);
	}
	return 0;
	//�������

}
