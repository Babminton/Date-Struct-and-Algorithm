#include<iostream>
using namespace std;
//���ͳ����������
int z[10];
void x(int a) {	
	switch (a)
	{
	case 0: z[0]++; break;
	case 1: z[1]++; break;
	case 2: z[2]++; break; 
	case 3: z[3]++; break;
	case 4: z[4]++; break;
	case 5: z[5]++; break;
	case 6: z[6]++; break;
	case 7: z[7]++; break;
	case 8: z[8]++; break;
	case 9: z[9]++; break;
	default: cout << "����ʧ��23333" << endl;
	
	}
}
int main() {
	int i, j, k,m;
	cout << "������Ҫͳ�Ƶ���ֵ" << endl;
	cin >> i;
	while (i!=0) {
	for (int j = 1; j <= i;j++) {
		k = j;
		while (k!=0) {
			m = k%10;
			 x(m);
			 k=k/10;

		}
	
	}
	for (int b = 0; b < 9;b++) {
		cout<<b<<"���ֵĴ���"<<z[b]<<endl;
	}
	cout<<"���ٴ�������Ҫͳ�Ƶ����ݣ��ԡ�0����Ϊ������־"<<endl;
	cin >> i;
	}
	system("pause");
	return 0;

}