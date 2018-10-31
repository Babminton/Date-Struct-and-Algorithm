#include "BiTree_2.h"

//��ʼ���ն�����
void InitBTree(BTNode* &root)
{
	root = NULL;
}

//����ǰ��������н���������
void CreateBTree_Pre(BTNode* &root, ElemType Array[])
{
	static int count = 0;	 //��̬����count
	char item = Array[count];//��ȡArray[]�����еĵ�count��Ԫ��
	count++;
	if (item == '#') { //�������#�ַ�����������
		root = NULL;
	}else {
		root = new BTNode; //�������
		root->data = item;
		CreateBTree_Pre(root->left, Array); //�������� 
		CreateBTree_Pre(root->right, Array); //�������� 
	}
}
//ǰ�����������
void PreOrder(BTNode *root)
{
	if (root != NULL) {
		cout << root->data;  //���ʸ�
		PreOrder(root->left); 	//ǰ�����������
		PreOrder(root->right);   //ǰ�����������
	}
}
//�������������
void InOrder(BTNode *root)
{
	if (root != NULL) {
		
		InOrder(root->left); 	//�������������
		cout << root->data;  //���ʸ�
		InOrder(root->right);   //�������������
	}
}
//�������������
void PostOrder(BTNode *root)
{
	if (root != NULL) {

		PostOrder(root->left); 	//�������������		
		PostOrder(root->right);   //�������������
		cout << root->data;  //���ʸ�
	}
}
//������������
int BTreeDepth(BTNode *root)
{
	static int CALL = 0;       //
	static int RETURN = 0;     //
	CALL++;
	if (root == NULL) {
		RETURN++;
		return 0;
	}
	else {
		int depl = BTreeDepth(root->left);
		int depr = BTreeDepth(root->right);
		if (depl > depr) {
			RETURN++;
			return depl + 1;
		}
		else {
			RETURN++;
			return depr + 1;
		}
	}
}

//�ͷŶ����������н��
void ClearBTree(BTNode* &root)
{
	if (root != NULL)
	{
		ClearBTree(root->left);
		ClearBTree(root->right);
		delete root;
		root = NULL;
	}
}