#include <iostream>
using namespace std;

int NtoZero(int num) {
  if (num == 0) {
    return 0;
  }
  cout << num-- << endl;
  return NtoZero(num);
}

int main() {
  int n;
  cout << "Enter any number";
  cin >> n;
  NtoZero(n);
  return 0;
}
