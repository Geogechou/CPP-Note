#include <iostream>
#include <ctime>
/*��ʱ�Ŀ⺯����clock_t��һ�������ͣ�clock()����ms*/
using namespace std;
//һ����ʱ3s��С���� 
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
