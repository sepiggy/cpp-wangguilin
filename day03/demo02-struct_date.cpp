#include <iostream>
using namespace std;

struct Date {
  int year;
  int month;
  int day;
};

void init(Date &d) {
  d.year = 1970;
  d.month = 1;
  d.day = 1;
}

void disDate(Date &d) {
  cout << "year: " << d.year << ", month:" << d.month << ", day:" << d.day << endl;
}

bool isLeapYear(Date &d) {
  return (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0;
}

int main() {

  Date d;

  init(d);
  disDate(d);

  if (isLeapYear(d)) {
    cout << "Leap year" << endl;
  } else {
    cout << "Not leap year" << endl;
  }

  return 0;
}

