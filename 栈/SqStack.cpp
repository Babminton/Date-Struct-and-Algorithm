#include "SqStack.h"
//≥ı ºªØø’À≥–Ú’ª
int InitStack(SqStack &S)
{
	S.top = -1;
	return 1;
}

//≈–À≥–Ú’ªø’
int StackEmpty(SqStack &S) {
	if (S.top == -1)
		return 1;
	else
		return 0;
}
//»Î’ª
int Push(SqStack &S, ElemType item) {
	if (S.top == MaxSize - 1) {
		cout << "’ª¬˙" << endl;
		return 0;
	}
	else
		S.top++;
		S.data[S.top] = item;
	return 1;
}
//≥ˆ’ª
int Pop(SqStack &S, ElemType &item) {
	if (S.top == -1) {
		cout << "’ªø’" << endl;
		return false;
	}
	else
	item=S.data[S.top];
	S.top--;
	return true;
}
//»°’ª∂•
int GetTop(SqStack &S, ElemType &item) {
	if (S.top == -1) {
		cout << "’ªø’" << endl;
		return 0;
	}
	else item = S.data[S.top];
	return 1;
}
//∞¥≥ˆ’ªÀ≥–Ú±È¿˙’ª
int TraverseStack(SqStack &S) {
	if (StackEmpty(S) == 1) {
		cout<<"’ªø’"<<endl;
		return 0;
	}
	for (int i = S.top; i >= 0; i--)
		cout << S.data[i] <<" ";
	cout << endl;
	return 0;

}
