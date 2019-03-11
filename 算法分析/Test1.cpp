#include<iostream>
using namespace std;
//针对统计数字问题
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
	default: cout << "程序失败23333" << endl;
	
	}
}
int main() {
	int i, j, k,m;
	cout << "请输入要统计的数值" << endl;
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
		cout<<b<<"出现的次数"<<z[b]<<endl;
	}
	cout<<"请再次输入你要统计的数据，以“0”作为结束标志"<<endl;
	cin >> i;
	}
	system("pause");
	return 0;

}