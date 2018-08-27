#include <iostream>

using namespace std;

#if 0
运算符重载简介
#endif

typedef struct _pos {
  int x_;
  int y_;
} Pos;

bool operator== (Pos one, Pos another)
{
  if (one.x_ == another.x_ && one.y_ == another.y_)
    {
      return true;
    }
  else
    {
      return false;
    }
}

int main ()
{
  Pos ps = {1, 2};
//  Pos fdPs = {3, 4};
  Pos fdPs = {1, 2};

  if (ps == fdPs)
    {
      cout << "==" << endl;
    }
  else
    {
      cout << "!=" << endl;
    }
  return 0;
}