#include <iostream>

using namespace std;

#if 0
1. 引用本质是个指针
2. 因为引用必须初始化, 所以可以推断它是个常指针, 一经声明不可改变
3. 引用是一个形如 "int * const p" 的形式
#endif

struct TypeC
{
	char c;
};

struct TypeP
{
	char *pc;
};

struct TypeR
{
	char &pr;
};

int
main()
{

	cout << "sizeof(TypeC) = " << sizeof(TypeC) << endl;
	cout << "sizeof(TypeP) = " << sizeof(TypeP) << endl;
	cout << "sizeof(TypeR) = " << sizeof(TypeR) << endl;

	return 0;
}