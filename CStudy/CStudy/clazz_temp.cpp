//clazz_temp.cpp

#include <iostream>

using namespace std;

template <class T>//类里面的对象的类型模板（比如string,int,float,double等等）。
/*struct Pair {
	T m_first;
	T m_second;

	Pair(T first,T second):m_first(first),m_second(second){}//简写

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
	float x = 3.9f, y = 4.89f;//默认浮点数是double型，所以后面加个f。
	P<float> sda(x, y);
	cout <<sda.sum() << endl;
}