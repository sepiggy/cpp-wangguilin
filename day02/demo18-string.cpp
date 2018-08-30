#if 0
1. 可以使用 string s("china"); 或 string s = "china"; 的形式进行字符串的初始化
2. getline 函数可以获取一行的输入, 即使输入的字符中包括空格也可以正常完成
3. 常用的字符串操作: "strlen, strcat, strcmp, strcpy" operation in C++
#endif

#include <iostream>

using namespace std;

int main() {

  string *ps = new string("china");
  cout << ps << endl;
  cout << *ps << endl;

#if 0
  string s;
  cout << sizeof(string) << endl;
  cout << sizeof(s) << endl;
  getline(cin, s);
  cout << s << endl;
#endif

  string s1 = "Great Wall";
  cout << s1.size() << endl;

  string s2 = " in China";
  s1 += s2;
  cout << s1 << endl;

  s1 == s2 ? cout << "==" << endl : cout << "!=" << endl;

  string s3 = s1;
  cout << s3 << endl;

  return 0;
}
