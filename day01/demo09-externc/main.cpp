#include <iostream>
#include "mystr.h"

using namespace std;

#if 0
1. 使用 extern "C" 可以避免命名倾轧
2. 对于函数的声明或定义要么都参与命名倾轧, 要么都不参与; 否则的话会出现链接错误
3. C++ 完全兼容 C 语言, 如果 C 是以源代码的方式给出的, 重新编译是没有问题的
   但是像 C 标准库一样, 以 .so 的方式给出也没有出现链接问题, 是因为使用了 "extern c"
#endif

int
main() {
    char *p = "china";
    int n = myStrlen(p);

    cout << "n = " << n << endl;
    return 0;
}