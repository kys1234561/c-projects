//point.cpp
//

#include "point.h"

using namespace std;

void point_show() {

	int  var = 20;   // ʵ�ʱ���������
	int  *ip;        /* ָ�����������,��ʱ����û��ָ��
	�κ�ֵ��ֻ��ָ��һ�����Ϳռ䣬�ʳ���Ұָ�룬
	*/
	ip = &var;       // ��ָ������д洢 var �ĵ�ַ��&ȡ��ַ


	cout << "Value of var variable: ";
	cout << var << endl;

	// �����ָ������д洢�ĵ�ַ
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// ����ָ���е�ַ��ֵ
	cout << "Value of *ip variable: ";
	cout << *ip << endl;/*ע�⣬*ip��ʾȡ����ipָ���ֵ��
	*��һ��ȡֵ����   */
}
