#include "listinarray.h"

//��ʼ�������Ա�
void InitList(SqList &L)
{
	L.length = 0;
}

//�ж����Ա��Ƿ�Ϊ�� 
bool ListEmpty(SqList L)
{
	if (L.length == 0)
		return true;
	else
		return false;
}

//������Ա���
int ListLength(SqList L)
{
	return L.length;
}

//�����Ա�ָ��λ�ò���һ����Ԫ��
bool ListInsert(SqList &L, int pos, ElemType item)
{//posΪ����ģ��߼���λ��,itemΪ�����������Ԫ��
	int i;
	if (L.length >= MaxSize) {                  //�б���
		cout << "˳��������޷����룡" << endl;
		return false;
	}
	if (pos<1 || pos>L.length + 1) {           //��λ��
		cout << "����λ����Ч��" << endl;
		return false;
	}
	for (i = L.length - 1; i >= pos - 1; i--)     //����ƶ�Ԫ��
		L.data[i + 1] = L.data[i];
	L.data[pos - 1] = item;		            //����	
	L.length++;			            //����һ
	return true;
}

//����������Ա�
void TraverseList(SqList L)
{
	int i;
	for (i = 0; i<L.length; i++)    //��ͷ��β������Ա��ÿһ��Ԫ��
		cout << L.data[i] << "  ";
	cout << endl;
}

//��ȡ˳�����ָ��λ���ϵ�����Ԫ�� 
bool GetElem(SqList L, int pos, ElemType &item)
{//posΪָ��λ��,item���ڷ����ҵ�������Ԫ��
	if (ListEmpty(L))	return false;
	if (pos<1 || pos>L.length) {
		cout << "λ����Ч" << endl;
		return false;
	}
	item = L.data[pos - 1];        //��Ԫ�ص�ֵͨ��ָ�봫�ݸ��ⲿ
	return true;
}

//�����Ա��в���Ԫ�أ����ص�һ����ָ��ֵƥ��Ԫ��λ��
int Find(SqList L, ElemType item)
{//itemΪ�����ҵ�����Ԫ��
	int i = 0;   // i��ʾ��ǰ���ҵ�λ�ã���ͷ��ʼ
	if (ListEmpty(L)) {
		cout << "˳���Ϊ�ձ��޷����ң�" << endl;
		return 0;
	}
	//��ͷ��β�Ƚ����Ա��е�Ԫ�أ���δ�������Ա��ĩβ����δ�ҵ�ʱ��i�����
	while (i<L.length && L.data[i] != item)
		i++;
	if (i<L.length)	    //���δ�������Ա��ĩβ��˵���ҵ�
		return i + 1;     //�����߼�λ��
	else
		return 0;       //�������Ա��ĩβ����˵���Ҳ���
}

//���������İ�ֵ����
//��˳������һ����㿪ʼ��ǰѰ�ҵ���һ��С��item��Ԫ�ص�λ��i����i+1Ϊ����λ�á�
//��Ѱ�ҹ����У����ڴ���item��Ԫ�ض�Ӧ����item֮�����Կɱ�Ѱ�ң��ߺ���Ԫ�أ����ҵ���һ��С��item��Ԫ��λ��iʱ������λ��Ҳ�ճ����ˡ�
bool ListInsert_order(SqList &L, ElemType item)
{
	int i = L.length - 1;
	if (L.length >= MaxSize) {
		cout << "˳�����������ʧ�ܣ�" << endl;
		return false;
	}
	while (L.data[i]>item && i >= 0) {
		L.data[i + 1] = L.data[i];
		i--;
	}
	L.data[i + 1] = item;
	L.length++;
	return true;
}
//˳�����
int SeqSearch(SqList L, ElemType item) {
	int i = 0;
	L.data[L.length] = item;
	while (L.data[i]!=item) {
		i++;
	}
	if (i==L.length) {
		return 0;
	}
	else {
		return 1;	
	}
}

//��������۰����
int BinarySearch(SqList L, ElemType item)
{
	int low = 0, high = L.length - 1, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (item == L.data[mid]) return mid + 1;//���ҳɹ����ϵ�٣��۲챾�β�������       
		else  if (item < L.data[mid]) high = mid - 1; //�������������� 	
		else  low = mid + 1; //���Ұ����������
	}//�ϵ�ڣ��۲��´β������� 
	return 0;
}
//��������в���һ��Ԫ�أ������ֱ�������� �������������
int ListInsert_Binary(SqList &L, ElemType item) {

	if (L.length >= MaxSize) {
		cout << "˳�����������ʧ�ܣ�" << endl;
		return 0;
	}
	int low = 0, high = L.length - 1, mid;
	int pos = -1;
	while (low <= high) {
		mid = (low + high) / 2;
		if (item == L.data[mid]) {
			pos = mid + 1;  break;   //mid+1���߼���ţ�mid�������±� --�����������
		}
		else if (L.data[mid] > item) {

			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
		if (pos == -1) {
			pos = low;
			for (int i = L.length - 1; i >= pos; i--)
				L.data[i + 1] = L.data[i];
			L.data[pos] = item;
			L.length++;
			return 1;

		}
		//��ֵ���ڣ��㲻�ڲ���

	}
