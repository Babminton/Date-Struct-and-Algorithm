#include <iostream>
using namespace std;
#define MaxSize 10    //定义常量
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int top;
}SqStack;
//初始化空顺序栈
int InitStack(SqStack &s);
//判顺序栈空
int StackEmpty(SqStack &S);
//入栈
int Push(SqStack &S, ElemType item);
//出栈
int Pop(SqStack &S, ElemType &item);
//取栈顶
int GetTop(SqStack &S, ElemType &item);
//按出栈顺序遍历栈
int TraverseStack(SqStack &S);