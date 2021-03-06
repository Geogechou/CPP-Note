// ConsoleApplication48.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
class student {
private:
	int age;
	string name;
public:
	/*构造函数*/
	student(int ageTemp,string nameTemp) {
		age = ageTemp;
		name = nameTemp;
	}
	/*析构函数*/
	~student() {
		cout << "student object has been destroied!" << endl;
	}
	virtual void print() {
		cout << "name: " << name << endl << "age: " << age << endl;
	}
};
/*postgraduater类继承student类*/
class postgraduater :public student {
private:
	string major;
public:
	postgraduater(string majorTemp,int ageTemp, string nameTemp):student(ageTemp,nameTemp) {
		major = majorTemp;
	}
	virtual void print() {
		student::print();
		cout << "mojor: " << major << endl;
	}
};
/*抽象类，凡是包括纯虚函数的类均为抽象类*/
class absVirtual {
public:
	/*纯虚函数*/
	virtual void absPrint() = 0;
};
class absVirtualSon :public absVirtual{
public:
	/*纯虚函数必须在子类中实现*/
	virtual void absPrint() {
		cout << "在字类实现了父类的纯虚函数" << endl;
	}
	/*使用引用来修改值*/
	void changeNum(int&num) {
		num = 0;
	}
};
int main()
{
	/*生成对象*/
	student s1(19, "geoge");
	s1.print();
	postgraduater p1("EE", 22, "chow");
	p1.print();
	absVirtualSon abs1;
	abs1.absPrint();
	int num = 10;
	cout << "num: " << num << endl;
	abs1.changeNum(num);
	cout << "after num: " << num << endl;
    return 0;
}

