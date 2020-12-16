//stl_vector.cpp
//

#include "stl_vector.h"
#include <vector>
#include <string>

using namespace std;

void stl_vector_show() {

	// 创建一个向量存储 int
	vector<int> vec;//vector本身是一个模板，此处实现模板实例化的功能。
	int i;

	// 显示 vec 的原始大小
	cout << "vector size = " << vec.size() << endl;
	cout << "vector size = " << size(vec) << endl;
	// 推入 5 个值到向量中
	for (i = 0; i < 5; i++) {
		vec.push_back(i);
	}


	// 显示 vec 扩展后的大小
	cout << "extended vector size = " << vec.size() << endl;
	// vec.size()和size(vec)都可以，习惯使用vec.size()
	// 访问向量中的 5 个值
	for (i = 0; i < 5; i++) {
		cout << "value of vec [" << i << "] = " << vec[i] << endl;
	}

	// 使用迭代器 iterator 访问值
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
}

void stl_vector_show1() {
	vector<int> v;
	int i;

	cout << "v 的长度：" << v.size() << endl;


	for (i = 0; i < 5; i++) {
		v.push_back(i);//往v中添加元素
	}

	cout << "v 的长度：" << v.size() << endl;

	for (i = 0; i < v.size(); i++) {
		cout <<v[i] << endl;
	}
	cout << endl;

	vector<int>::iterator ve = v.begin();//begin对vector的实例对象v的
	//第1个元素创建一个迭代器ve,迭代器自身是一个指针。
	cout << *ve << endl;
	cout << endl;
	while (ve != v.end()) {
		cout << *ve << endl;
		ve++;
	}
	


}

