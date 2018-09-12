#include <iostream>
using namespace std;
typedef int word;//通用格式，举例说明typedef的用法，typedef typename aliasName;
typedef char* pointer;//举例说明将指向char的指针，别名定义为pointer 
int main(void)
{
	word a=3;//word等效于int 
	cout<<a<<endl;
	pointer p1;//用pointer声明一个变量，pointer在此处等效于char * 
	p1=new(char);
	*p1='k';
	cout<<*p1<<endl;
	return 0;
 } 
