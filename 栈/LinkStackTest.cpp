//LinkStackTest.cpp
#include "LinkStack.h"
int main(){
        LinkStNode *mylinkstnode;
        InitStack(mylinkstnode);

      for(int i = 1; i <= 10; i++)
      Push(mylinkstnode, i);

      ElemType a,b;
      Pop(mylinkstnode, a);       //��ջ
      cout<<"��ջ��Ԫ���ǣ�"<<a<<endl;
      GetTop(mylinkstnode, b);
      cout<<"��ʱ��ջ��Ԫ����"<<b<<endl;
      TraverseStack(mylinkstnode);
	  Destroy(mylinkstnode);
    return 0;
}