#include "SqStack.h"
int main() {
	SqStack my_stack1;
	InitStack(my_stack1);
	for (int i = 1; i <= 10; i++)
		Push(my_stack1, i+10);
	TraverseStack(my_stack1);
	int x;
	for (int i=1; i <= 5; i++) {
		Pop(my_stack1, x);
		cout << "��"<<i<<"�γ�ջ����" << x << " ";
	}
	cout << endl;
	int y;
	while (GetTop(my_stack1,y)==1)
	{
		cout<<"�����ʱ��ջ���ǣ� "<<y<<endl;
		break;
	}
	
	return 0;

}