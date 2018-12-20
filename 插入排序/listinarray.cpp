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

//�����Ա���ɾ����һ����ָ��ֵƥ���Ԫ��
bool ListDelete(SqList &L, int pos, ElemType &item)
{//posΪɾ���ģ��߼���λ��,��item���ر�ɾԪ��
	int i;
	if (ListEmpty(L)) {                     //�б��
		cout << "˳���Ϊ�ձ��޷�ɾ����" << endl;
		return false;
	}
	if (pos<1 || pos>L.length) {       //��λ��
		cout << "ɾ��λ����Ч��" << endl;
		return false;
	}
	item = L.data[pos - 1];          //ɾ��Ԫ��ǰ����Ԫ�ص�ֵͨ��ָ�봫�ݸ��ⲿ������
	for (i = pos; i<L.length; i++)      //��ǰ�ƶ�Ԫ��	
		L.data[i - 1] = L.data[i];
	L.length--;		           //����һ
	return true;
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

//����������Ա�
void TraverseList(SqList L)
{
	int i;
	for (i = 0; i<L.length; i++)    //��ͷ��β������Ա��ÿһ��Ԫ��
		cout << L.data[i] << "  ";
	cout << endl;
}