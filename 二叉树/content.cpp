#include "BiTree.h"

int main()
{
	
	BTNode *root;

	TreeInit(root);//��ʼ���ն�����
	CreateBTree(root);//���տμ�ʾ��ͼ����һ�ö�����
	cout<< LeafCount(root)<<endl;
	cout << TwoDegreeCount(root) << endl;

	system("pause");    //������ֹ����
	return 0;




	/*
	cout << "hello world" << endl;
	system("pause");
	return 0;
	*/
	}