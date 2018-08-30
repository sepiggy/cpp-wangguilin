#if 0
同名命名空间自动合并
#endif

#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

using namespace std;

namespace namea {
int a = 10;
}

namespace namea {
int b = 30;
}

int main() {
  using namespace namea;
  cout << a << endl << b << endl;

  using namespace NS;
  using namespace CC;

  A a;
  B b;
  C c;

  return 0;
}
