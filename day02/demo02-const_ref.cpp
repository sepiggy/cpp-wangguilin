#include <iostream>

using namespace std;

int
main()
{
    const int a = 100;
    // int &ra = a; // error: 引用要保证与被引用类型是完全等价的类型
    int const &ra = a; // or const int &ra = a;

    int b = 100;
    int &rb = b;
    const int &crb = b; // crb 这个引用只具备读的属性
    cout << crb << endl;
    // crb = 999; // error

    return 0;
}

