//scope.cpp
//

#include "scope.h"

using namespace std;

int a = 3;//全局变量
int b;//未显示初始化的全局变量,全局变量自动初始化为0

int globle() {
	return 543;
}

void scope_show() {
	cout << a << " " << b << endl; //打印全局变量a和b

	int c = 0; //定义局部变量c,局部变量必须初始化
	int a = 2; //定义局部变量a,局部变量必须初始化

	cout << c << " " << a << endl; //打印局部变量c和a
	cout << c << "  " << ::a << endl;
	cout << "" << endl;

	cout << a<< "         " << ::a << endl;//打印局部变量a和全局变量a
	cout << a << "            " << ::a << endl;
	{
		int d = 5; //定义块中变量d
	}
	//cout << d << endl; //试图打印出d

	cout << ::globle() << endl;  //::是调用全局的操作。
}
