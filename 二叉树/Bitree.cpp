#include "BiTree.h"

//��ʼ���ն�����
void TreeInit(BTNode* &root)
{
	root = NULL;
}

//���տμ�ʾ��ͼ����һ�ö�����
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
//���������Ҷ�ӽ��ĸ���  ==���Ϊ0�Ľ��
int LeafCount(BTNode *root) {
	if (root == 0) {
		return 0;
	}
	if (root->lchild == NULL&&root->rchild == NULL) {
		return 1;
	}
	return LeafCount(root->lchild) + LeafCount(root->rchild);

}

//���������˫��֧���ĸ���
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

