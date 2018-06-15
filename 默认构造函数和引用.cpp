//默认构造函数和引用的用法 ，引用作为函数返回值 
#include <iostream>
#include<cstring>
using namespace std;
string & left(string& str,int n=1)
{
	string temp(n,'0');
	for(int i=0;i<n;i++)
	temp[i]=str[i];
	str=temp;
	return str;
}
int main(void)
{
	string a="hello world";
	string ps=left(a,7);
	cout<<a;
}
