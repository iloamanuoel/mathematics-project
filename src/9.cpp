#include <iostream>
#include <string>

using namespace std;

int main() {
  int num = 0;
  string str = "";

  cout << "Enter a number: ";
  cin >> num;

  if (num % 2 == 0) {
    str = "even";
  } else {
    str = "odd";
  }

  cout << "The number is " << str << endl;

  return 0;
}
