#include "LinkQueue.h"
int main() {
	LinkQueue Q;
	InitQueue(Q);
	char str[20];
	cout << "����һ���ַ�����"<<endl;
	cin >> str;	
	cout << "������ַ����ǣ�"<< str <<endl;
	Palindrome_Test(str);

	system("pause");
	return 0;

   }