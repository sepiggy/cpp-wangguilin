#include <iostream>
#include <stdio.h>

using namespace std;

#if 0
1. 函数重载, 会出现重名的函数, 重名的函数会根据语境来决定调用
2. 运算符重载, 也是一种函数重载
3. 函数重载也是一种简洁的需要
4. 重载规则
4.1 函数名相同
4.2 参数的类型, 个数以及顺序有一个不同即可构成重载
4.3 函数返回值类型不能作为重载的标准
5. 匹配规则
5.1 严格匹配
5.2 若严格匹配不满足, 则寻求是否有隐式转换
#endif

int
abs(int a)
{
    return a > 0 ? a : -a;
}

float
abs(float a)
{
    return a > 0 ? a : -a;
}

int
main()
{
    cout << abs(-5) << endl;
    cout << abs(-5.3f) << endl;
    return 0;
}

#if 0
void func (int a);
void func (float a);
void func (char a);

int
main ()
{
  int a = 1;
  func (a);

  float b = 1.2;
  func (b);

  char c = 'c';
  func (c);

  return 0;
}

void
func (int a)
{
  cout << "void func(int a)" << endl;
}

void
func (float a)
{
  cout << "void func(float a)" << endl;
}

void
func (char a)
{
  cout << "void func(char a)" << endl;
}
#endif
