// elevator_simulation_oop.cpp: 定义控制台应用程序的入口点。
//
#include "MyUtil.h"


int main()
{
	MyUtil u;

	cout << "高级方法" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout<<u.random(-10, 10);
		cout << endl;
	}
	cin.get();
    return 0;
}

