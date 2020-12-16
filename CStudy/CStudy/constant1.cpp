//constant.cpp
//

#include "constant1.h"

using namespace std;

//相当于一个预处理常量
//在编译的时候定义的
#define PI 32.1415926
//常量
void a_show() {
	cout << PI << endl;

	//const是在执行的时候定义的常量

	const double e = 2.71;
	cout << e << endl;


	const float b = 1.2f;//浮点数默认double型
	cout << b << endl;

	const int c = 0x10;
	cout << c << endl;

	const int d = 0b10;
	cout << d << endl;

}
