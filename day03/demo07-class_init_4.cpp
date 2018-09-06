#if 0
实例验证: 初始化列表中变量的初始化顺序与初始化列表中变量的书写顺序无关, 与声明顺序有关
#endif

#include <iostream>
#include <string.h>

using namespace std;

class A {
 public:
  A(char *str) : _name(str), _len(strlen(_name.c_str())) {

  }

  void dis() {
    cout << _len << endl;
  }

 private:
  int _len;
  string _name;
};

int main() {
  // 颠倒以下两行位置即可得到正确结果
  A a("china");
  a.dis();
  return 0;
}