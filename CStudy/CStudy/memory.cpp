//memory.cpp
//

#include "memory.h"
#include <Windows.h>

using namespace std;

//ջ�б����Ĵ���ʹ����ʾ
//ջ
//ջ���Զ��ͷź��Զ����տռ�ġ�
void stack() {
	int* ptr_a = NULL;
	{//   {}��ʾ����顣
		int a = 3;//ջ������һ������a,��ִ�г�������󣬱����ᱻ�Զ�����
		ptr_a = &a;
		cout << *ptr_a << endl;
	}
	cout << *ptr_a << endl; //���Ǵ���ģ���Ϊ��ʱ��a�Ѿ����ͷš�
	/*���ڼ�������ܵĿ��ǣ��п��ܲ��������ͷţ���Ȼ���ܿ��Է���
	������Ҫ��ֵ�����Ǻ�Σ�գ����ڴ���bug*/
}

//��
//����Ҫ�ֶ��ͷźͻ��տռ䡣
void heap() {
	int* ptr_a = NULL;
	{
		//�ڶ�������һ����������ʼ��ֵΪ4�����Ѹñ�����ָ�봫�ݸ�ptr_aָ�����
		ptr_a = new int(4);//new��ʾ�ڶ�������һ���ռ䡣
	}
	cout << *ptr_a << endl; //�ⲻ�����κ�����

	delete ptr_a; //�ͷźͻ��տռ䡣
	// �����ִ����䣬�ڴ��й¶
}

//й¶
void leak() {
	for (int i = 1; i < 1000000; i++) {
		int* a = new int[100000];//[]��������
		//int a[100000];//�˴���ջ�ռ䣬��Ϊû��new
		delete[] a;//delete[] a,ɾ������a��
		Sleep(1);
	}
}


void d() {
	int a[5] = { 1,23, 4, 55, 6 };
	cout << *a << endl;
}
void memory_show() {

	stack();
	//heap();
	//leak();
	//d();


}

