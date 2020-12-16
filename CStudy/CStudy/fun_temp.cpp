//fun_temp.cpp

#include <iostream>

using namespace std;

//声明函数模板，typename和class都可以用，但是历史原因，习惯用typename来声明函数模板。
template <typename T>
T add(T& a, T&b) {
	return a + b;
}


void fun_temp_show() {
	float x = 3.189138f, y = 4.33f;
	cout << add(x, y) << endl;
	int xx = 3, yy = 4;
	cout << add(xx, yy) << endl;
}