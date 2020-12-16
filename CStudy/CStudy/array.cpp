//array.cpp
//

#include "array.h"

using namespace std;

void array_show() {

	//创建一个数组，该数组被分配了40个字节的空间
	int a[10];
	cout << sizeof(a) << endl;

	//创建一个数组，并初始化它
	
	cout << "-----------------------------" << endl;

	double b[4] = { 100.1,100.2,200.5,90324.8};
	cout << b[0] << endl;
	cout << b[3] << endl;
	cout << b[7] << endl;//越界，非常危险的操作

	cout << "-----------------------------" << endl;


	// 使用指针的方式操作数组
	cout << b << endl;//打印数组的指针

	cout << *b << endl; //取出第一个元素
	cout << *(b + 3) << endl; //取出第二个元素
	cout << *(b + 7) << endl; //越界取值，非常危险的操作
	cout <<  endl;
	cout << *b << endl;
	cout << *(b+2) << endl;
	cout << *(b + 6) << endl;
	cout << "-----------------------------" << endl;

	// 创建一个二维数组
	int c[3][4] = {
		{0, 1, 2, 3} ,   /*  初始化索引号为 0 的行 */
		{4, 5, 6, 7} ,   /*  初始化索引号为 1 的行 */
		{8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
	};
	cout << c[1][2] << endl; //取出第1行第2列的值
	cout << c[1] << endl;//取出第1行第一个元素的指针
	cout << "-----------------------------" << endl;
	


	int arr[2][2] ={ 
		{20,3},
		{4,5} 
		};
	cout << arr[0][1] << endl;
	cout << endl;
	cout << arr[0] << endl;//取出第0 行第1个数的指针，即地址。
	cout << *arr[0] << endl;
	cout << &arr[0] << endl;
	cout << endl;
	for (int i = 0; i < 2; i++) {
		cout << arr[0][i] << "   " ;
	}
}
