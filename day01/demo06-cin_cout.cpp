#include <iostream>
using namespace std;

#if 0
1. scanf 和 printf 是函数
2. cin 和 cout 是类对象
3. >> 表示流输入运算符, 这里是运算符重载
4. C++ 中多使用 string 取代 char*
#endif

int
main()
{
//    int a, b, c;
//    cin >> a >> b >> c;
//
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl;
//
//    char buf[10];

//    cin >> buf;
//    cin.getline(buf, 10);
//    cout << buf << endl;

    string str;
    cin >> str;
    cout << str << endl;
    cout << str.max_size() << endl;

    return 0;
}