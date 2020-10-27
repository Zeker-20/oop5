#include <iostream>
using namespace std;
#define MAXSIZE 10
class Stack
{
	//private:
public:
	int *top;
	int Data[MAXSIZE];
	int num;
	void InitStack()
	{
		top = Data;
		num = 0;
	}
	void PUSH(int x)
	{
		*(top) = x;
		top++;
		num++;
	}
	int  POP()
	{
		
		top--;
		num--;
		return *(top);
	}
	int Size()
	{
		return num;
	}
	int JudgeFullorVoid()
	{
		if (num == 0)
			return 0;
		if (num == MAXSIZE)
			return 1;
		return -1;
	}
};
int main()
{
	Stack S;
	S.InitStack();
	cout << "输入想要送入栈的数据" << endl;
	int x, y = 1;
	cin >> x;
	S.PUSH(x);
	while(y)
	{
		cout << "继续输入请输入1,否则0" << endl;
		cin >> y;
		if (y == 0)
			break;
		cout << "输入想要送入栈的数据" << endl;
		cin >> x;
		S.PUSH(x);
	}
	int m;
	m=S.POP();
	cout << "取出的第一个数是" << m << endl;
	int n;
	n = S.JudgeFullorVoid();
	if (n == 0)
		cout << "栈为空" << endl;
	if (n == 1)
		cout << "栈满" << endl;
	else
		cout << "栈既不空也不满" << endl;
	int z;
	z = S.Size();
	cout << "当前栈的大小为" << z << endl;
	return 0;
}
































