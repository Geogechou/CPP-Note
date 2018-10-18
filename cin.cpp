#include<iostream> 
#include<string>
using namespace std;
int main () {
	
char ch;
float number;
cin>>ch;
while(ch!='='){
	if((ch>='0'&&ch<='9')||ch=='.'){
		cin.putback(ch);
		cin>>number;
		cout<<"number: "<<number<<endl;	
		/*取缓冲区的下一个字符*/ 
		cin>>ch;
	}else{
		cout<<"alpha: "<<ch<<endl;
		cin>>ch;
	}
	
}
return 0;
}
