//LinkStack.cpp
#include "LinkStack.h"

//初始化空链栈
bool InitStack(LinkStNode* &S)
{
	S = new LinkStNode;
	if (S == NULL)
	{
		cout << "初始化错误";
		return false;
	}
	S->next = NULL;
	return true;
}

//判栈空
bool StackEmpty(LinkStNode *S)
{
	if (S->next == NULL)
		return true;
	else
		return false;
}

//入栈
bool Push(LinkStNode *S, ElemType item)
{ //带头结点单链表的表头插入法
	LinkStNode *t = new LinkStNode; //①生成新结点
	if (t == NULL) {
		cout << "出错";
		return false;
	}
	t->data = item;

	//②在栈顶插入新结点
	t->next = S->next;
	S->next = t;
	return true;
}
//出栈
bool Pop(LinkStNode *S, ElemType &item)
{ //删除单链表的第一个元素结点
  //①判断栈是否为空
	if (S->next == NULL) {
		cout << "栈空";
		return false;
	}

	//②删除栈顶元素
	LinkStNode *t = S->next;
	S->next = t->next;
	item = t->data;
	delete t;
	return true;
}

//取栈顶
bool GetTop(LinkStNode *S, ElemType &item)
{
	//①判断栈是否为空
	if (S->next == NULL) {
		cout << "栈空";
		return false;
	}

	//②取栈顶元素
	item = S->next->data;   //首结点
	return true;
}

//释放链栈
void Destroy(LinkStNode* &S)
{
	LinkStNode *p;
	while (S)
	{
		p = S;
		S = S->next;
		delete p;
	}
}
//按出栈顺序遍历 链栈
bool TraverseStack(LinkStNode *S) {
	LinkStNode  *p = S->next;   //p是首结点
	if (StackEmpty(S)) {
		cout << "空栈" << endl;
		return 0;
	}
	while (p)
	{
		cout << p->data << "  ";
		p = p->next;
	}
	cout << endl;
	return 0;
}
// 判断回文
bool IsReverse(char *s) {
	int i = 0;
	ElemType e;
	int n = strlen(s);
	LinkStNode *st;
	InitStack(st);
	for (i = 0; i < n; i++)
		Push(st, s[i]);
	for (i = 0; i < n; i++) {
		Pop(st, e);
		if (e == s[i]) {
			continue;
		}
		else {
			cout << "不是回文" << endl; return false;
		}
	}
	cout << "是回文" << endl;
	return true;
}
//数值转换
void conversion(int a, int b) {
	LinkStNode *mylinkstnode;
	InitStack(mylinkstnode);
	ElemType item,x;
	char z = 'A';
	cout << "请输入你想要转换的"<<a<<"进制数" << endl;
	cin >> item;
	while (item) {
		x = item%b;
		Push(mylinkstnode, x);    //余数进栈
		item = item / b;          //除数
	}
	   int e = 0;
	   cout<<"转换成"<<b<<"进制数是：";
	     while (!StackEmpty(mylinkstnode))
		     {
			 Pop(mylinkstnode, e);     //逐个出栈
			if (e >= 10 && e <= 15) {  //结果为十六进制时用到转换为字母
				char y;
					y= z + e - 10;
				cout << y;
			}
			else
				cout << e;
	     }
		 cout << endl;
}