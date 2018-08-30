#include <iostream>

using namespace std;

// 用二级指针来交换字符串
void
mySwap(char **p, char **q)
{
    char *t = *p;
    *p = *q;
    *q = t;
}

// 用指针的引用来代替上述二级指针来交换两个字符串
void
mySwap(char *&p, char *&q)
{
    char *t = p;
    p = q;
    q = t;
}

int
main()
{
    char *p = "China";
    char *q = "Canada";

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;

//  mySwap (&p, &q);
    mySwap(p, q);

    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    return 0;
}