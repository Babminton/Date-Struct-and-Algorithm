#include "lislnArray.h"

int main()
{
	SqList my_List2;
	InitList(my_List2);
	char string[] = "student";   //�ַ���   --string ��ʾ���������
	for (int i = 1; i <= 7; i++) {
		ListInsert(my_List2, i, string[i - 1]);
	}
	cout << "my_list2��";
	TraverseList(my_List2);
	char x;
	ListDelete(my_List2,6, x);   //ɾ���߼�λ��Ϊ6��Ԫ��ֵ
	cout<<"ɾ����Ԫ���ǣ�"<<x<<endl;
	TraverseList(my_List2);

	return 0;
}