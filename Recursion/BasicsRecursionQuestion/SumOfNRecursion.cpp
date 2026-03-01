#include <iostream>
using namespace std;

int sum = 0;
int PrintToN(int n, int i = 1) {
  // base case
  if (i > n) {
    return 0;
  }
  sum = sum + i;
  return PrintToN(n, ++i);
}

int main() {
  int n;
  cout << "Enter any number";
  cin >> n;
  PrintToN(n);
  cout << endl;
  cout << sum;
  return 0;
}

// dry run
// 1
// 3
// 6
// 10
// 15
