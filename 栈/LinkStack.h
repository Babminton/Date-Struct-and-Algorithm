//LinkStack.h
#include <iostream>
using namespace std;

typedef int ElemType;
typedef struct LNode {
	ElemType       data; //数据域
	struct LNode  *next; //后继结点指针
} LinkStNode;  //链栈结点类型

			   //初始化空链栈
bool InitStack(LinkStNode* &S);

//判链栈空
bool StackEmpty(LinkStNode *S);

//入栈
bool Push(LinkStNode *S, ElemType item);

//出栈
bool Pop(LinkStNode *S, ElemType &item);

//取栈顶
bool GetTop(LinkStNode *S, ElemType &item);

//释放链栈
void Destroy(LinkStNode* &S);
//按出栈顺序遍历链栈
bool TraverseStack(LinkStNode *S);
//判断回文
bool IsReverse(char *s);
//数值转换
void conversion(int a, int b);