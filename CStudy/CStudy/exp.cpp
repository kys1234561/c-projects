//exp.cpp
//

#include "exp.h"

using namespace std;

void arithmetic() {
	int a = 21;
	int b = 10;
	int c;

	c = a + b;
	cout << "Line 1 - c ��ֵ�� " << c << endl;
	c = a - b;
	cout << "Line 2 - c ��ֵ�� " << c << endl;
	c = a * b;
	cout << "Line 3 - c ��ֵ�� " << c << endl;
	c = a / b;
	cout << "Line 4 - c ��ֵ�� " << c << endl;
	c = a % b;
	cout << "Line 5 - c ��ֵ�� " << c << endl;

	int d = 10;   //  �����������Լ�
	c = d++;
	cout << "Line 6 - c ��ֵ�� " << c << endl;
	
	d = 10;    // ���¸�ֵ
	c = ++d;
	cout << "Line 7 - c ��ֵ�� " << c << endl;

	d = 10;    // ���¸�ֵ
	c = d--;
	cout << "Line 7 - c ��ֵ�� " << c << endl;
}

void compare() {
	cout << (1 < 2) << endl;
	cout << (1 > 2) << endl;
	cout << (1 == 2) << endl;
	cout << (1 != 2) << endl;
	cout << (1 >= 1) << endl;
	cout << (1 <= 2) << endl;
}

void logic() {
	cout << (1 < 2 && 3 > 2) << endl;
	cout << (1 < 2 || 3 < 2) << endl;
	cout << !(1 < 2) << endl;//   !ȡ��
	cout << !(1 == 2) << endl;
	cout << (1 != 2) << endl;
}

void assign() {
	int a = 21;
	int c;

	c = a;
	cout << "Line 1 - =  �����ʵ����c ��ֵ = : " << c << endl;

	c += a;
	cout << "Line 2 - += �����ʵ����c ��ֵ = : " << c << endl;

	c -= a;
	cout << "Line 3 - -= �����ʵ����c ��ֵ = : " << c << endl;

	c *= a;
	cout << "Line 4 - *= �����ʵ����c ��ֵ = : " << c << endl;

	c /= a;
	cout << "Line 5 - /= �����ʵ����c ��ֵ = : " << c << endl;

	c = 200;
	c %= a;
	cout << "Line 6 - %= �����ʵ����c ��ֵ = : " << c << endl;

	cout << 200 % 21 << endl;
	cout << float(c) / 10;
}

void exp_show() {
	arithmetic();
	compare();
	logic();
	assign();
}
