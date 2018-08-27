#include <iostream>

using namespace std;

#if 0
1. 指针的数组有; 但引用的数组无
#endif

int
main ()
{
  int a, b, c;
  int *p[] = {&a, &b, &c};
  int &q[] = {a, b, c}; // error

  return 0;
}
