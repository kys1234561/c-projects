//clazz_temp.cpp

#include <iostream>

using namespace std;

template <class T>//������Ķ��������ģ�壨����string,int,float,double�ȵȣ���
/*struct Pair {
	T m_first;
	T m_second;

	Pair(T first,T second):m_first(first),m_second(second){}//��д

	T sum() {
		return m_first + m_second;
	}
};
*/

struct P {
	T first;
	T second;

	P(T f, T s) :first(f), second(s) {};

	T sum() {
		return first;
	}
};
void clazz_temp_show() {
	float x = 3.9f, y = 4.89f;//Ĭ�ϸ�������double�ͣ����Ժ���Ӹ�f��
	P<float> sda(x, y);
	cout <<sda.sum() << endl;
}