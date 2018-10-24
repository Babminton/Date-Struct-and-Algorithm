#include "BiTree.h"

//初始化空二叉树
void TreeInit(BTNode* &root)
{
	root = NULL;
}

//按照课件示意图建立一棵二叉树
void CreateBTree(BTNode* &root)
{
	BTNode *a, *b, *c, *d, *e, *f, *g;

	a = root = new BTNode;
	a->data = 'A';

	b = a->lchild = new BTNode;
	b->data = 'B';

	c = a->rchild = new BTNode;
	c->data = 'C';
	c->rchild = NULL;

	d = b->lchild = new BTNode;
	d->data = 'D';
	d->lchild = NULL;
	d->rchild = NULL;

	e = b->rchild = new BTNode;
	e->data = 'E';
	e->lchild = NULL;
	e->rchild = NULL;

	f = c->lchild = new BTNode;
	f->data = 'F';
	f->lchild = NULL;

	g = f->rchild = new BTNode;
	g->data = 'G';
	g->lchild = NULL;
	g->rchild = NULL;

}
//计算二叉树叶子结点的个数  ==求度为0的结点
int LeafCount(BTNode *root) {
	if (root == 0) {
		return 0;
	}
	if (root->lchild == NULL&&root->rchild == NULL) {
		return 1;
	}
	return LeafCount(root->lchild) + LeafCount(root->rchild);

}

//计算二叉树双分支结点的个数
int TwoDegreeCount(BTNode *root) { 
	int n = 0;
	if (root == 0) {
		return 0;
	}
	if (root->lchild !=NULL&& root->rchild != NULL) {
		n = 1;
	}
	else n = 0;
	return n + TwoDegreeCount(root->lchild) + TwoDegreeCount(root->rchild);

}

