#include <iostream>
using namespace std;
typedef int word;//ͨ�ø�ʽ������˵��typedef���÷���typedef typename aliasName;
typedef char* pointer;//����˵����ָ��char��ָ�룬��������Ϊpointer 
int main(void)
{
	word a=3;//word��Ч��int 
	cout<<a<<endl;
	pointer p1;//��pointer����һ��������pointer�ڴ˴���Ч��char * 
	p1=new(char);
	*p1='k';
	cout<<*p1<<endl;
	return 0;
 } 
