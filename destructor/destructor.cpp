// destructor.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>
using namespace std;
class Ctest
{
private:
	int x;
	int *p;
	static int flag;
public:
	Ctest()
	{
		p = new int;
		x = 0;
		flag = 1;
	}
	void setx(int a, int b)
	{
		*p = a;
		x = b;
	}
	void display()
	{
		cout << "*p=" << *p << endl;
		cout << "x=" << x << endl;
	}
	~Ctest()
	{
		if (flag != 0)
		{
			delete p;
			flag = 0;
		}
	}
};
int Ctest::flag = 0;

int main()
{
	Ctest ot1;
	ot1.display();
	ot1.setx(100, 1000);
	ot1.display();
	Ctest ot2(ot1);
	ot2.display();
	ot1.setx(200, 2000);
	ot1.display();
	ot2.display();
	return 0;
}
