#if 0
初始化列表 (Initial list)
1. 只用来初始化类的成员
2. 其他东西不能放在初始化列表中
3. 初始化列表能够提高效率
4. 初始化列表中变量的初始化顺序与初始化列表中变量的书写顺序无关, 与变量的声明顺序有关
#endif

#include <iostream>

using namespace std;

class A {
 public:
  A() {};

  A(int z) : x(0), y(1), z(z) {};

  void printInfo() {
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
  };

 private:
  int x, y, z;
};

int main() {
  A a;
  a.printInfo();

  A aa(999);
  aa.printInfo();
}
