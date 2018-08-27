#include <iostream>
#include <time.h>

using namespace std;

#if 0
函数默认参数的规则:
1. 从右往左, 不能跳跃
2. 个数: 实参 + 默认 >= 形参

#endif

#if 0
void
weatherForcast (char *w = "rainny")
{
  time_t t = time (0);
  char tmp[64];
  strftime (tmp, sizeof (tmp), "%Y/%m/%d %X %A ", localtime (&t));
  cout << tmp << "today is weather " << w << endl;
}

int
main ()
{
  weatherForcast ();
  weatherForcast ();
  weatherForcast ();
  weatherForcast ();
  weatherForcast ();
  weatherForcast ("sunny");
  weatherForcast ();
  weatherForcast ();
  weatherForcast ();
  weatherForcast ();
  weatherForcast ();
  return 0;
}
#endif
