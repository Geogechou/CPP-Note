#include <iostream>
using namespace std;
#include<fstream>
//简单的读写文件程序 
int main(void)
{
	ifstream infile;
	infile.open("C:\\news.txt");
	if(!infile.is_open())
	{
		cout<<"failure"<<endl;
	}
	char c[1000];int i=0;
	while(!infile.eof())
	{
		c[i++]=infile.get();
	}
	infile.close();
	cout<<c;
	ofstream outfile;
	outfile.open("D:\\shit.txt");//C盘写不进去，我也不知道为啥！-_- ...... 
	if(!outfile.is_open())
	{
		cout<<"failure"<<endl;
	}
	outfile<<c;
	outfile.close();
	return 0;
 } 
