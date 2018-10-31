#include "BiTree_2.h"

int main()
{
	BTNode *root;
	ElemType A[] = "ABD##E##CF#G###";//��"#"����շ�֧���ĳ����������

	InitBTree(root);//��ʼ���ն�����
	CreateBTree_Pre(root, A);//��ǰ��������н���������

	cout << "ǰ��������У�";
	PreOrder(root);//���ǰ���������
	cout << endl;

	cout<<"����������У�";
	InOrder(root);//��������������
	cout<<endl;

	cout<<"����������У�";
	PostOrder(root);//��������������
	cout<<endl;

	cout << "��ȣ�" << BTreeDepth(root) << endl;//������������

	ClearBTree(root);
	system("pause");    //������ֹ����
	return 0;
}