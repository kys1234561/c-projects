//var.cpp
//

#include "var.h"

using namespace std;

void var_show() {
	int i = 0;
	cout << i << endl;//cout�������Ϊ��ʾ�������������ݣ�endl��ʾ���С�

	float j = 2.2;
	cout << j << endl;

	int ii = -2;
	cout << ii << endl;

	unsigned int k = -2;
	cout << k << endl;

	char c = 'a', d = 0x35;//0x35��ʾ16�����µ�ascii��
	cout << c << " " << d << endl;

	string str1 = "hello";
	cout << str1 << endl;
	cout << sizeof(str1) << endl;
	cout << size(str1) << endl;

	char str2[] = "world";
	cout << str2 << endl;
	cout << size(str1) << endl;

	char str3[] = { 'L', 'i', 'e', 'W', 'e', 'i', '\0' };// \0��ʾ�ַ�����β����Ϊ0(ʮ������)��ascii���б�ʾ���ַ�
	cout << str3 << endl;
	cout << size(str3) << endl;
}
