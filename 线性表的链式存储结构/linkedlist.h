//linkedlist.h
#include <iostream>
using namespace std;

struct ElemType      
{
	int sid;
	float score;
};

typedef struct LNode    //LNode为结点类型名
{
	ElemType data;      //data代表数据元素
	struct LNode *next; //next为指向下一结点的指针
} LinkNode;     // 单链表结点类型
//初始化单链表
void InitList(LinkNode* &L);
//判表空
bool ListEmpty(LinkNode *L);
//求单链表中当前元素的个数
int ListLength(LinkNode *L);
//遍历单链表
void TraverseList(LinkNode *L);
//删除学号为number的结点
int ListDeletefour(LinkNode *L, int number);
void DestroyList(LinkNode* &L);
bool ListInsert(LinkNode *L, int pos, ElemType item);
