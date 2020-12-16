//var.cpp
//

#include "var.h"

using namespace std;

void var_show() {
	int i = 0;
	cout << i << endl;//cout可以理解为显示器，后面是内容，endl表示换行。

	float j = 2.2;
	cout << j << endl;

	int ii = -2;
	cout << ii << endl;

	unsigned int k = -2;
	cout << k << endl;

	char c = 'a', d = 0x35;//0x35表示16进制下的ascii表。
	cout << c << " " << d << endl;

	string str1 = "hello";
	cout << str1 << endl;
	cout << sizeof(str1) << endl;
	cout << size(str1) << endl;

	char str2[] = "world";
	cout << str2 << endl;
	cout << size(str1) << endl;

	char str3[] = { 'L', 'i', 'e', 'W', 'e', 'i', '\0' };// \0表示字符串结尾，因为0(十进制下)在ascii表中表示空字符
	cout << str3 << endl;
	cout << size(str3) << endl;
}
