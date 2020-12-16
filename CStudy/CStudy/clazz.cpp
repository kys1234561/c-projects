//clazz.cpp

#include "clazz.h"
#include <string>

using namespace std;
/*
struct Person {

private:
	//属性
	string name;
	int age;

public:
	//默认构造函数
	Person() {
		this->name = "liewei";
		this->age = 32;//this相当于python的self，c++中this是指针。
		//
	}

	//自定义构造函数
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}


	//方法
	void say() {
		cout << "my name is " << this->name << ", I am " << this->age << " year old." << endl;
	}

	//析构函数
	~Person()//用一个~来写析构函数。
	{
		cout << "person 已经被释放" << endl;
	}
};

void clazz_show() {
	{
		Person liewei;//实例化对象
		liewei.say();
	}
	cout << "----------------------" << endl;

	{
		Person* zhang = new Person("zhang3", 25);//此处调用自定义构造函数
		zhang->say();//通过指针调用方法，用->;//当对象调用完函数之后，自动执行析构函(实现比如文件打开之后，要关闭的操作（即扫尾工作）)
		(*zhang).say();//通过对象调用方法，用.;
	}
	cout << "**********************" << endl;
	
}*/

struct Person {
private :
	string name;
	int age;

public:
	Person() {
		this->name = "猎维科技";
		this->age = 22;

	}//默认构造函数

	Person(string name,int age) {
		this->name = name;
		this->age = age;
	}//自定义构造函数

	void say() {
		cout << "my name is " << this->name << ", I am " << this->age << " year old." << endl;
	}

	~Person() {
		cout << "person已经释放" << endl;
	}//实现扫尾工作，对象调用完函数，直接自动执行。
};


void clazz_show() {
	{
		Person person;
		person.say();//这个里面是在栈上面申请的变量，当离开这个{}之后，变量自动释放。
	}
	cout << "----------------------" << endl;
	{
		Person* zhangs = new Person("张三", 45);//new在堆中申请，new还可以防止我原本不知道存储我给的变量的大小，防止计算机无法分配合适的内存，用new直接申请内存。
		zhangs->say();
		delete zhangs;//此处代码有没有必要？
	}
}