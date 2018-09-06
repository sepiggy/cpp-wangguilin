#if 0
类名也是一种命名空间; 同样使用 : 操作符进行限定
#endif

#include <iostream>

using namespace std;

namespace xxx {
int a = 120;
void dis();
}

void xxx::dis() {
  cout << a << endl;
}

int main() {
  xxx::dis();
  return 0;
}