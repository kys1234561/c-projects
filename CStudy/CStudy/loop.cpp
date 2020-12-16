//loop.cpp
//

#include "loop.h"

using namespace std;

//for循环
void for_loop() {
	for (int i = 0; i < 5; i++) {
		cout << i << endl;
	}










	/*

	int a[] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 6; i++) {
		cout << a[i] << endl;
		cout << &a[i] << endl;
		cout << endl;
	}*/
}

//foreach循环,for循环的简写
void foreach_loop() {
		int a[] = { 122,54,231 };
		for (int& k : a) {
			cout << k << endl;
}
		



	/*
	
	int a[] = { 1,2,3,4,5,6 };
	for (int& k : a) {
		cout << k << endl;
	}*/
}

//while循环
void while_loop() {
	int a[] = { 1,2,3,4,5,6 };
	int i = 0;
	while (i < 6) {
		cout << a[i++] << endl;
	}
}

//do...while循环
void do_while_loop() {
	int a[] = { 1,2,3,4,5,6 };
	int i = 0;
	do {
		cout << a[i++] << endl;
	} while (i < 6);
}

void a() {
	int a[4] = {1, 2, 3, 4};
	cout << a << endl;
	cout << &a[0] << endl;
	cout << endl;
	cout << &a[1] << endl;
	cout << a+1 << endl;

}
void loop_show() {
	//for_loop();
	foreach_loop();
	while_loop();
	//do_while_loop();
	//a();
}
