#include <iostream>
using namespace std;

#if 0
1. 函数重载和默认参数在调用时可能会有冲突的情况
2. 最佳实践: 当实现同一功能, 既可以使用默认参数, 又可以使用函数重载的时候, 推荐使用默认参数!
#endif

void
func (int a)
{

}

void
func (int a, int b = 3)
{

}

int main ()
{
  func (1, 2);
  // func (3); // conflict
  return 0;
}