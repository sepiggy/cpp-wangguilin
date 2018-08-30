#include <iostream>
#include <string.h>

using namespace std;

#define SQR(x) ((x)*(x))

#if 0
1. 宏的优点: 内嵌, 避免函数调用的开销; 宏的缺点: 在替换过程中不进行类型检查, 易造成代码膨胀.
2. 普通函数的优点: 抽象, 可以实现一次书写, 多次调用; 普通函数的缺点: 有调用开销.
3. inline 函数兼具宏和普通函数的优点, 摒弃它们的缺点. 在 C++ 中用以替代宏.
4. inline 与 register 一样都是建议型关键字, 只有短小且频繁使用的函数, 才有可能被编译器采纳为真正的 inline 函数.

#endif

inline int sqr(int x) {
  return x * x;
}

int main() {
  int i = 0;
  while (i < 5) {
    // cout << SQR(i++) << endl;
    cout << sqr(i++) << endl;
  }

  return 0;
}