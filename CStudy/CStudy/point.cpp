//point.cpp
//

#include "point.h"

using namespace std;

void point_show() {

	int  var = 20;   // 实际变量的声明
	int  *ip;        /* 指针变量的声明,此时由于没有指向
	任何值，只是指向一个整型空间，故称作野指针，
	*/
	ip = &var;       // 在指针变量中存储 var 的地址，&取地址


	cout << "Value of var variable: ";
	cout << var << endl;

	// 输出在指针变量中存储的地址
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// 访问指针中地址的值
	cout << "Value of *ip variable: ";
	cout << *ip << endl;/*注意，*ip表示取出来ip指针的值，
	*是一个取值操作   */
}
