//ContextTest.cpp
#include "linkedlist.h"
int main() {
	//���������ĵ�����L�в����µ�Ԫ��item�������������Ȼ����
	LinkNode *mylist;  //���嵥����
	InitList(mylist);   //��ʼ������
	ElemType A[] = { { 101 ,85 },{ 103, 90.5 },{ 104, 73 },{ 105, 55 } };

	for (int i = 0; i<4; i++)
		ListInsert(mylist, i + 1, A[i]);
	cout << "ѧ�� �ɼ�" << endl;
	TraverseList(mylist);
	cout<<"����������Ҫɾ����ѧ��"<<endl;
	int x;
	int i = 1;
	cin >> x;
	while (x != '0') {
		    //��¼ɾ���Ĵ���
		ListDeletefour(mylist, x);
		cout << "��" << i << "��" << endl;
		cout << "ѧ�� �ɼ�" << endl;
		TraverseList(mylist);
		if (i==4) {
			cout<<"ɾ�����"<<endl;
			return 0;
		}
		i++;
		cout<<"���ٴ���������Ҫɾ����ѧ��"<<endl;
		cin >> x;
		
	}
	DestroyList(mylist);
	return 0;
}


