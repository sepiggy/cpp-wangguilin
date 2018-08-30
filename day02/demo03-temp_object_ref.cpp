#include <iostream>

using namespace std;

#if 0
1. 临时变量即不可取地址的对象
2. 临时变量包括: 常量, 表达式, 函数返回值, 类型不同的变量
3. 临时变量前的引用要加 const 进行修饰
#endif

int
foo()
{

	int a = 100;
	return a;
}

int
main()
{

	// 常量的引用
	const int &c1 = 55;
	cout << c1 << endl;

	// 表达式的引用
	int a = 3;
	int b = 5;
	const int &c2 = a + b;
	cout << c2 << endl;

	// 函数返回值的引用
	const int &c3 = foo();
	cout << c3 << endl;

	// 类型不同变量的引用
	double d = 100.12;
	const int &c4 = d;
	cout << c4 << endl;

	return 0;
}