// ConsoleApplication37.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
template<typename T>
/*data struct*/
struct MaxMin {
	T Max;
	T Min;
};
template <typename  T>
/*the method of processing data*/
class max_min {
public:
	MaxMin<T> max(T a,T b,T c) {
		T temp;
		temp = a > b ? a : b;
		temp = temp > c ? temp : c;
		MaxMin<T> str;
		str.Max = temp;
		return str;
	};
	MaxMin<T> min(T a,T b,T c) {
		T temp;
		temp = a < b ? a : b;
		temp = temp < c ? temp : c;
		MaxMin<T> str;
		str.Min = temp;
		return str;
	};
};
int main()
{
	MaxMin<int> res;
	max_min<int> func1;
	res = func1.max(1, 2, 3);
	cout << res.Max<<endl;
	res = func1.min(1, 2, 3);
	cout << res.Min;
    return 0;
}

