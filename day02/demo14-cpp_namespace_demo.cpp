#include <iostream>

using namespace std;

// 这里两个命名空间中的 x 都是全局变量
namespace ONE {
int x = 4;
int y = 111;
}

namespace ANOTHER {
int x = 14;
}

int main() {

  /*
   * 命名空间使用的三种方法:
   * 法1, 多用
   * 法2, 少用
   * 法3, 禁用
   */

  // 法1
  {
    int x = 250;
    cout << ONE::x << endl;
    cout << ANOTHER::x << endl;
    cout << x << endl;
  }

  // 法2
  {
    // int x = 250;
    using ONE::x; // using 起到释放作用域的作用
    cout << x << endl;
    // using ANOTHER::x;
    // cout << x << endl; // 冲突
  }

  // 法3
  {
    using namespace ONE; // 释放命名空间中的所有变量
    cout << x << endl << y << endl;
    using namespace ANOTHER;
    // cout << x << endl; // 冲突
  }

  return 0;
}
