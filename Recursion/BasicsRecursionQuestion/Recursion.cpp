#include <iostream>
using namespace std;
void unlimtedPrint(string s = "hello world") {
  cout << s << endl;
  unlimtedPrint(s);
}

int main() { unlimtedPrint(); }
