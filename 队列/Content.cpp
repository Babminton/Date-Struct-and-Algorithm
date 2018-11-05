#include "SqQueue.h"

int main() {

	SqQueue q;
	InitQueue(q);
	for (int i = 1; i <= 10; i++) {
		EnQueue(q,i);
	}
	cout << "环形队列的长度" << QueueLength(q) << endl;
	ElemType x;
	DeQueue(q, x);
	cout<<"此时出队的是："<<x<<endl;
	ElemType y;
	GetFront(q, y);
	cout<<"此时的队头是: "<<y<<endl;

	cout << "遍历环形队列: ";
	TraverseQueue(q);


	system("pause");    //程序终止设置
	return 0;

}


