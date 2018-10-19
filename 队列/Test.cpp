#include "LinkQueue.h"
int main() {
	LinkQueue Q;
	InitQueue(Q);
	char str[20];
	cout << "输入一个字符串："<<endl;
	cin >> str;	
	cout << "输入的字符串是："<< str <<endl;
	Palindrome_Test(str);

	system("pause");
	return 0;

   }