#include <iostream>
using namespace std;

#if 0
1. const_cast 只作用于指针和引用, 其作用是去 const 化
2. const_cast 可以理解为对 "const" 语义的补充
3. const_cast 使用的基本流程:
   非 const 对象 ---> const 引用 / 指针 ---> 去 const 化 ---> 原非 const 对象被修改
4. 对 const 对象使用 const_cast 转化是未定义行为
#endif

int main() {
  int a;
  const int &ra = a;

  a = 100;
  cout << a << endl;

  // ra = 300; // read-only
  const_cast<int &>(ra) = 300;
  cout << ra << endl;
  cout << a << endl;

  const int *p = &a;
  // *p = 400; // read-only
  *const_cast<int *>(p) = 400;
  cout << *p << endl;

  return 0;
}