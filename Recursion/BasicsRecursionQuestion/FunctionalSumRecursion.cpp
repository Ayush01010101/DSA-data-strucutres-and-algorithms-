#include <iostream>
using namespace std;
int printton(int n) {
  if (n == 0) {
    return 0;
  }
  return n + printton(n - 1);
}

int main() {
  int n;
  cout << "Enter any number";
  cin >> n;
  cout << printton(n);
}
