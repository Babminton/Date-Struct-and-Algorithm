#include <iostream>
using namespace std;
typedef int Type;

void Swap(int &a, int &b)
{
	int temp = a; a = b; b = temp;
}
int Partition(Type a[], int p, int r)
{
	int i = p, j = r + 1;
	Type x = a[p];
	// ��< x��Ԫ�ؽ������������
	// ��> x��Ԫ�ؽ������ұ�����
	while (true) {
		while (a[++i] <x);   //���� i=i+1;  ���� a[i]<x;
		while (a[--j] >x);
		if (i >= j) break;
		Swap(a[i], a[j]);
	}
	
	a[p] = a[j];
	a[j] = x;
	return j;
}
void QuickSort(Type a[], int p, int r)
{
	if (p<r) {
		int q = Partition(a, p, r);
		QuickSort(a, p, q - 1); //����������
		QuickSort(a, q + 1, r); //���Ұ������
	}
}

int main(void)
{
	Type a[] = { 11,9,3,61,5,1598,7 };
	cout << "����ǰ��ԭʼ����";
	for (int i = 0; i <= 6; i++)
		cout << a[i] << "  ";
	cout << endl;
	QuickSort(a, 0, 6);
	cout << "�ź������������";
	for (int i = 0; i <= 6; i++)
		cout << a[i] << "  ";
	cout << endl;
	 system("pause");
	return 0;
}
