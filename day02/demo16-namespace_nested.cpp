#if 0
命名空间的嵌套
#endif

#include <iostream>

using namespace std;

namespace one {
int x = 4;
int y = 100;
namespace another {
int x = 14;
}
}

int main() {
  cout << one::another::x << endl;
  cout << one::x << endl;

  // 以下两行将产生冲突
  // using one::x;
  using one::another::x;
  cout << x << endl;

  return 0;
}