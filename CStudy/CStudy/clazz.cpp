//clazz.cpp

#include "clazz.h"
#include <string>

using namespace std;
/*
struct Person {

private:
	//����
	string name;
	int age;

public:
	//Ĭ�Ϲ��캯��
	Person() {
		this->name = "liewei";
		this->age = 32;//this�൱��python��self��c++��this��ָ�롣
		//
	}

	//�Զ��幹�캯��
	Person(string name, int age) {
		this->name = name;
		this->age = age;
	}


	//����
	void say() {
		cout << "my name is " << this->name << ", I am " << this->age << " year old." << endl;
	}

	//��������
	~Person()//��һ��~��д����������
	{
		cout << "person �Ѿ����ͷ�" << endl;
	}
};

void clazz_show() {
	{
		Person liewei;//ʵ��������
		liewei.say();
	}
	cout << "----------------------" << endl;

	{
		Person* zhang = new Person("zhang3", 25);//�˴������Զ��幹�캯��
		zhang->say();//ͨ��ָ����÷�������->;//����������꺯��֮���Զ�ִ��������(ʵ�ֱ����ļ���֮��Ҫ�رյĲ�������ɨβ������)
		(*zhang).say();//ͨ��������÷�������.;
	}
	cout << "**********************" << endl;
	
}*/

struct Person {
private :
	string name;
	int age;

public:
	Person() {
		this->name = "��ά�Ƽ�";
		this->age = 22;

	}//Ĭ�Ϲ��캯��

	Person(string name,int age) {
		this->name = name;
		this->age = age;
	}//�Զ��幹�캯��

	void say() {
		cout << "my name is " << this->name << ", I am " << this->age << " year old." << endl;
	}

	~Person() {
		cout << "person�Ѿ��ͷ�" << endl;
	}//ʵ��ɨβ��������������꺯����ֱ���Զ�ִ�С�
};


void clazz_show() {
	{
		Person person;
		person.say();//�����������ջ��������ı��������뿪���{}֮�󣬱����Զ��ͷš�
	}
	cout << "----------------------" << endl;
	{
		Person* zhangs = new Person("����", 45);//new�ڶ������룬new�����Է�ֹ��ԭ����֪���洢�Ҹ��ı����Ĵ�С����ֹ������޷�������ʵ��ڴ棬��newֱ�������ڴ档
		zhangs->say();
		delete zhangs;//�˴�������û�б�Ҫ��
	}
}