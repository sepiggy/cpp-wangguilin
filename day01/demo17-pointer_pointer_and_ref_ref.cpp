#include <iostream>

using namespace std;

#if 0
1. 指针的指针有; 引用的引用无
2. 可以对一个指针再取地址; 但不可以对一个引用再取引用 (递归关系)
#endif

int
main()
{
    int i = 100;
    int *p = &i;
    int **pp = &p;
    int ***ppp = &pp;
    int ****pppp = &ppp;

    int &ra = i;
    int &rb = ra;
    int &rc = rb;
//  int &&rra = ra; // error

    return 0;
}