#include <iostream>
using namespace std;
enum{red,orange,yellow,green,blue,violet,indigo};
//枚举的应用，red=0，orange=1，yellow=2..... 
int main(void)
{
	int code;
	cout<<"enter color code(0-6):";
	cin>>code;
	while(code>=red && code<=indigo)
	{
		switch(code)
		{
			case red: cout<<"red"; break;
			case orange: cout<<"orange";break;
			case yellow: cout<<"yellow"; break;
			case green: cout<<"green"; break;
			case blue: cout<<"blue"; break;
			case violet:cout<<"violet";break;
			case indigo: cout<<"indigo"; break;
		}
		cout<<"\nenter color code(0-6)";
		cin>>code;
	}
	cout<<"bye........";
	return 0;
 } 
