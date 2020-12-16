//inherit.cpp

#include "inherit.h"
#include <string>

using namespace std;
class Animal {
protected:
	string m_sex;//定义m_sex;
public:
	Animal(string sex):m_sex(sex){}//Animal(string sex){this->m_sex=sex}的简写方式。。
	//Animal(string sex) {
		//this->m_sex = sex;
	//}
	virtual void say() {
		cout << "What is the sex of the Animal ?" << endl;
	}//virtual 虚拟函数
};
/*
class Cat :public Animal {
public:
	Cat(string sex) : Animal(sex) {}//传递sex
	void say() {
		cout << "This cat's sex is " << this->m_sex << "." << endl;
	}
};
*/








class Catt :public Animal {
public:
	Catt(string sex) : Animal(sex){}
	void say() {
		cout << "This cat's sex is " << this->m_sex << "." << endl;
	}
};
/*
void inherit_show() {
	Animal* mycat = new Catt("母");//new是在堆里面的操作
	mycat->say();
	delete mycat;

};*/

void inherit_show() {
	Animal* mycat = new Catt("公");//前父类，后子类
	mycat->say();
	delete mycat;
}