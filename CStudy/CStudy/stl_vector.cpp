//stl_vector.cpp
//

#include "stl_vector.h"
#include <vector>
#include <string>

using namespace std;

void stl_vector_show() {

	// ����һ�������洢 int
	vector<int> vec;//vector������һ��ģ�壬�˴�ʵ��ģ��ʵ�����Ĺ��ܡ�
	int i;

	// ��ʾ vec ��ԭʼ��С
	cout << "vector size = " << vec.size() << endl;
	cout << "vector size = " << size(vec) << endl;
	// ���� 5 ��ֵ��������
	for (i = 0; i < 5; i++) {
		vec.push_back(i);
	}


	// ��ʾ vec ��չ��Ĵ�С
	cout << "extended vector size = " << vec.size() << endl;
	// vec.size()��size(vec)�����ԣ�ϰ��ʹ��vec.size()
	// ���������е� 5 ��ֵ
	for (i = 0; i < 5; i++) {
		cout << "value of vec [" << i << "] = " << vec[i] << endl;
	}

	// ʹ�õ����� iterator ����ֵ
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
}

void stl_vector_show1() {
	vector<int> v;
	int i;

	cout << "v �ĳ��ȣ�" << v.size() << endl;


	for (i = 0; i < 5; i++) {
		v.push_back(i);//��v�����Ԫ��
	}

	cout << "v �ĳ��ȣ�" << v.size() << endl;

	for (i = 0; i < v.size(); i++) {
		cout <<v[i] << endl;
	}
	cout << endl;

	vector<int>::iterator ve = v.begin();//begin��vector��ʵ������v��
	//��1��Ԫ�ش���һ��������ve,������������һ��ָ�롣
	cout << *ve << endl;
	cout << endl;
	while (ve != v.end()) {
		cout << *ve << endl;
		ve++;
	}
	


}

