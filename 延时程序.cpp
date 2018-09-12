#include <iostream>
#include <ctime>
/*计时的库函数，clock_t是一个长整型，clock()返回ms*/
using namespace std;
//一个延时3s的小程序 
int main(void)
{
	cout<<"enter time:";
	float sec;
	sec=3;
	clock_t delay=sec * CLOCKS_PER_SEC;
	cout<<"startting \a"<<endl;
	clock_t start=clock();
	while(clock()-start<delay)
	;
	cout<<"done";
	return 0;
 } 
