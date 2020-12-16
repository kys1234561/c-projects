//constant.cpp
//

#include "constant.h"

using namespace std;

#define PI 3.1415926//相当于一个预处理常量
//在编译的时候定义的
#define p 3.1415926
//常量
void constant_show() {
	cout << PI << endl;
	cout << p << endl;
	cout << endl;

	const double e = 2.71;//const是在执行的时候定义的常量,在函数（方法）里面写的
	cout << e << endl;
	cout << endl;

	const double ss = 4.34243;
	cout << ss << endl;
	cout << endl;

	const float sss = 34.321f;
	cout << sss << endl;
	cout << endl;

	const float s = 3232.434f;
	cout << s << endl;

	const float b = 1.2f;//浮点数默认double型
	cout << b << endl;

	const int c = 0x10;
	cout << c << endl;

	const int d = 0b10;
	cout << d << endl;
	
}
