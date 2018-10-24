#include <iostream>
using namespace std;

typedef char ElemType;

typedef struct Node {
	ElemType	data;    //数据域	
	struct Node *lchild;
	struct Node *rchild; //结点的左右子树指针	
}BTNode;//二叉树结点类型

		//初始化空二叉树
void TreeInit(BTNode* &root);

//按照课件示意图建立一棵二叉树
void CreateBTree(BTNode* &root);

//计算二叉树叶子结点的个数
int LeafCount(BTNode *root);

//计算二叉树双分支结点的个数
int TwoDegreeCount(BTNode *root);
