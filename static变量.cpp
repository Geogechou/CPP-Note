// ConsoleApplication46.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>
using namespace std;

void func() {
	/*静态变量只会初始化一次*/
	static int i = 2;
	i++;
	cout << i << endl;
}
int main()
{
	func();
	func();
	func();
    return 0;
}

