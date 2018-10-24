#include "BiTree.h"

int main()
{
	
	BTNode *root;

	TreeInit(root);//初始化空二叉树
	CreateBTree(root);//按照课件示意图建立一棵二叉树
	cout<< LeafCount(root)<<endl;
	cout << TwoDegreeCount(root) << endl;

	system("pause");    //程序终止设置
	return 0;




	/*
	cout << "hello world" << endl;
	system("pause");
	return 0;
	*/
	}