//ref.cpp
//

#include "ref.h"

using namespace std;

void ref_show() {
	// 声明简单的变量
	int    i=3;
	double d=4;

	int j = 45;
	double u = 9.9685;

	// 声明引用变量。定义引用变量就是取别名
	int&    r = i;
	double& s = d;

	int& h = j;
	double& p = u;

	h = 94023;
	p = 3.3432;
	cout << j << endl;
	cout << h << endl;
	cout << endl;
	cout << u << endl;
	cout << p << endl;



/*
	i = 5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r << endl;

	d = 11.7;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s << endl;
	*/
}
void ref1_show() {
	int *p;//定义指针变量
	int f = 89;
	p = &f;
	cout << p << endl;
	cout << *p << endl;
}
int f() {
	return 344;
}