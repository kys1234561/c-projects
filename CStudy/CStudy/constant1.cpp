//constant.cpp
//

#include "constant1.h"

using namespace std;

//�൱��һ��Ԥ������
//�ڱ����ʱ�����
#define PI 32.1415926
//����
void a_show() {
	cout << PI << endl;

	//const����ִ�е�ʱ����ĳ���

	const double e = 2.71;
	cout << e << endl;


	const float b = 1.2f;//������Ĭ��double��
	cout << b << endl;

	const int c = 0x10;
	cout << c << endl;

	const int d = 0b10;
	cout << d << endl;

}
