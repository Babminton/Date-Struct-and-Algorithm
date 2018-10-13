//LinkStackTest.cpp
#include "LinkStack.h"
int main(){
        LinkStNode *mylinkstnode;
        InitStack(mylinkstnode);

      for(int i = 1; i <= 10; i++)
      Push(mylinkstnode, i);

      ElemType a,b;
      Pop(mylinkstnode, a);       //出栈
      cout<<"出栈的元素是："<<a<<endl;
      GetTop(mylinkstnode, b);
      cout<<"此时的栈顶元素是"<<b<<endl;
      TraverseStack(mylinkstnode);
	  Destroy(mylinkstnode);
    return 0;
}