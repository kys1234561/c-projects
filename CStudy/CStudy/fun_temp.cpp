//fun_temp.cpp

#include <iostream>

using namespace std;

//��������ģ�壬typename��class�������ã�������ʷԭ��ϰ����typename����������ģ�塣
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