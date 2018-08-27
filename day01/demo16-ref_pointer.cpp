#include <iostream>

using namespace std;

#if 0
1. 指针的引用有; 引用的指针无
2. 引用的本质是对指针的包装, 避免使用裸露的指针
3. 对于引用的指针类型, C++ 避免对引用的再次开封
#endif

int
main ()
{
  int a;
  int *pa = &a; // 指针
  int &ra = a;  // 引用
  int *&par = pa;    // 指针的引用
  int &*rap = &ra;   // 引用的指针 error!

  return 0;
};



