//memory.cpp
//

#include "memory.h"
#include <Windows.h>

using namespace std;

//栈中变量的错误使用演示
//栈
//栈是自动释放和自动回收空间的。
void stack() {
	int* ptr_a = NULL;
	{//   {}表示程序块。
		int a = 3;//栈中声明一个变量a,当执行出作用域后，变量会被自动清理
		ptr_a = &a;
		cout << *ptr_a << endl;
	}
	cout << *ptr_a << endl; //这是错误的，因为这时候a已经被释放。
	/*出于计算机性能的考虑，有可能不会马上释放，虽然可能可以访问
	到我需要的值，但是很危险，属于大型bug*/
}

//堆
//堆需要手动释放和回收空间。
void heap() {
	int* ptr_a = NULL;
	{
		//在堆中声明一个变量，初始化值为4，并把该变量的指针传递给ptr_a指针变量
		ptr_a = new int(4);//new表示在堆上申请一个空间。
	}
	cout << *ptr_a << endl; //这不会有任何问题

	delete ptr_a; //释放和回收空间。
	// 如果不执行这句，内存会泄露
}

//泄露
void leak() {
	for (int i = 1; i < 1000000; i++) {
		int* a = new int[100000];//[]生成数组
		//int a[100000];//此处是栈空间，因为没有new
		delete[] a;//delete[] a,删除数组a。
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

