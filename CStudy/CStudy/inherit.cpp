//inherit.cpp

#include "inherit.h"
#include <string>

using namespace std;
class Animal {
protected:
	string m_sex;//����m_sex;
public:
	Animal(string sex):m_sex(sex){}//Animal(string sex){this->m_sex=sex}�ļ�д��ʽ����
	//Animal(string sex) {
		//this->m_sex = sex;
	//}
	virtual void say() {
		cout << "What is the sex of the Animal ?" << endl;
	}//virtual ���⺯��
};
/*
class Cat :public Animal {
public:
	Cat(string sex) : Animal(sex) {}//����sex
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
	Animal* mycat = new Catt("ĸ");//new���ڶ�����Ĳ���
	mycat->say();
	delete mycat;

};*/

void inherit_show() {
	Animal* mycat = new Catt("��");//ǰ���࣬������
	mycat->say();
	delete mycat;
}