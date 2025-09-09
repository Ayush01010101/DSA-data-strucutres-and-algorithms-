#include <iostream>
using namespace std;
int main() {
  int n;

  cout << "Enter any number";
  cin >> n;
  int prev = 1, last = 0;
  int current;

  if (n < 2) {
    cout << "F1 is 0" << endl;
    cout << "F2 is 1" << endl;
  }
  for (int i = 2; i <= n; i++) {

    current = prev + last;
    cout << "F " << i << "is " << current << endl;
    last = prev;
  }
  prev = current;
  return 0;
}
