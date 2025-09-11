#include <iostream>
using namespace std;
int main() {
  int n = 1;
  cout << "enter any number";
  cin >> n;
  for (int i = n; i >= 1; i--) {

    for (int j = 1; j <= (n - i); j++) {
      cout << " ";
    }
    for (int j = 1; j <= (i * 2) - 1; j++) {
      cout << "*";
    }

    for (int j = 1; j < i; j++) {
      cout << " ";
    }
    cout << endl;
  }
  return 0;
}
