#include <iostream>

using namespace std;

#if 0
传引用等价于传作用域 --- 把一个变量以引用的方式传到另外一个作用域, 就等价于扩展了该变量的作用域
#endif

// 用指针做参数
void
mySwap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

// 用引用做参数
void
mySwap(int &ra, int &rb)
{
    int t = ra;
    ra = rb;
    rb = t;
}

int
main()
{
    int a = 3;
    int b = 5;

    mySwap(a, b);
    cout << "a=" << a << ", b=" << b << endl;
    a = 3;
    b = 5;

    mySwap(&a, &b);
    cout << "a=" << a << ", b=" << b << endl;

    return 0;
}