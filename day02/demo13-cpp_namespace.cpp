#include <iostream>
using namespace std;

#if 0
C++ 中的命名空间, 就是将全局无名的命名空间再次划分的结果.
#endif

void foo() {
  cout << "foo" << endl;
}

int mm = 100;

int main() {
  int mm = 200;

  cout << mm << endl; // 访问局部 mm
  cout << ::mm << endl; // 访问全局 mm

  ::foo();
  return 0;
}
