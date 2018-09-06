#if 0
析构器
1. 析构器在对象被销毁前自动被调用, 用来处理一些清理工作(主要针对堆对象)
2. 与类名相同, 无参数无返回值(没有默认参数, 没有函数重载), 前面加一个 ~
3. 析构器不是必须的, 若没有显示提供析构器, 系统会提供一个空体的析构器
#endif

#include <iostream>

using namespace std;

class Date {
 public:
  Date(int y = 0, int m = 0, int d = 0)
      : year(y), month(m), day(d) {
  }

  ~Date() {
    cout << "析构器被调用" << endl;
  }

 private:
  int year;
  int month;
  int day;
};

int main() {
  {
    // 栈上的对象
    Date d;
  }

  cout << "程序马上结束运行" << endl;

  // 堆上的对象
  Date *pd = new Date;
  delete pd;

  return 0;
}