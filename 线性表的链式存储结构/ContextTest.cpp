//ContextTest.cpp
#include "linkedlist.h"
int main() {
	LinkNode *mylist;  //���嵥����
	InitList(mylist);   //��ʼ������
  //ͷ�巨 --��ԭ������������෴
	for (int i = 0; i < 4; i++)
	{
		ListInsert(mylist, 1, 'a' + i);
	}
	//   β�巨--��ԭ�������ݣ������ͬ
	for (int i = 0; i < 4; i++)
	{
		ListInsert(mylist, i + 1, 'a' + i);
	}

	TraverseList(mylist);

	if (ListEmpty(mylist) != true)
	{
		cout << "������Ϊ�գ����ȣ�" << ListLength(mylist) << endl;
		cout << "����������";
		TraverseList(mylist);
	}
	else  cout << "������Ϊ��" << endl;

	ElemType x;
	Find_pos(mylist, 3, x);
	cout << "������Ԫ����" << x << endl;
	ListInsert(mylist, 3, 'f');
	cout << "�ڵ�3��λ�ò���f ������������ǣ�";
	TraverseList(mylist);
	ElemType y;
	ListDeletpos(mylist, 2, y);
	cout << "ɾ����2��λ�õ�ֵ��" << y << endl;
	cout << "��ʱ������������ǣ�";
	TraverseList(mylist);

	cout << "��������ɾ����Ԫ��,����0��ʾ��ת����һ������" << endl;
	char z;
	cin >> z;
    while (z != '0') {
			if (ListDelete(mylist, z)) {
				cout << z<<"-ɾ���ɹ�" << endl;
			}
			else  cout << "ɾ��ʧ�ܡ�û�д�Ԫ��" << endl;

			cout << "���ٴ���������ɾ����Ԫ�أ�����0��ʾ��ת����һ������" << endl;
			cin >> z;
		
	} 
	while(z =='0' ) {
		cout<<"��������֪������ֵ��λ�ã�������1--�ͽ�������"<<endl;
		char p;
		cin >> p;
		while (p!='1') {
			cout << "��ֵ��λ���ǣ�" << Find_item(mylist, p) << endl;
			cout << "���ٴ���������֪����Ԫ��"<<endl;
			cin >> p;

		}
		DestroyList(mylist);
		return 0;
	}
	
	
}