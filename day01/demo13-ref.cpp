#include <iostream>

using namespace std;

#if 0
1. 引用是一种声明关系, 不开辟内存空间, 必须要初始化, 不能单独存在.
2. 引用与被别名的变量拥有相同的数据类型.
3. 声明关系一旦确立, 不可变更.
4. 可以对引用再次引用, 也就是对一个变量, 可以建立多个引用. 此时引用间是种平行关系.
5. 辨别 & 符号的三种作用: 取地址, 按位与, 引用
#endif

int
main ()
{
  int a = 100;
  int &ra = a;

  cout << "a = " << a << endl;
  cout << "ra = " << ra << endl;
  cout << "&a = " << &a << endl;
  cout << "&ra = " << &ra << endl;
  cout << "sizeof(a) = " << sizeof(a) << endl;
  cout << "sizeof(ra) = " << sizeof(a) << endl;

//  int b;
//  int &ra = b;

  // a, ra, xra, yra, zra 之间是平行关系
  int &xra = a;
  int &yra = a;
  int &zra = yra;

  return 0;
}