//LinkStackTest.cpp
#include "LinkStack.h"
int main(){
        LinkStNode *mylinkstnode;
        InitStack(mylinkstnode);

		cout << "���Ĳ���" << endl;
	//	char x[] = "abcba";
	    char x[] = "abc";
		IsReverse(x);
		Destroy(mylinkstnode);
		return 0;

}