#if 0
区分以下两者:
class A{};
A a;   // 声明一个类 A 的实例 a
A a(); // 声明一个返回类 A 实例的函数 a
#endif

#include <iostream>

using namespace std;

class A {
 public:
  A() {
    cout << "A() is called." << endl;
  }

  A(int i) {
    cout << "A(int i) is called." << endl;
  }
};

int main() {
  A a(); // 这里是函数声明, 不是构造器调用
  A aa(10);
  return 0;
}
