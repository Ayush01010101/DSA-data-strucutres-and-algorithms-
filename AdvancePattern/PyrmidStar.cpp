#include <iostream>
using namespace std;
int main() {
  int n = 1;
  cout << "Enter any number";
  cin >> n;
  for (int i = 1; i <= n; i++) {
    // space
    for (int j = 1; j <= (n - i); j++) {
      cout << " ";
    }
    // start
    for (int k = 1; k <= (i * 2) - 1; k++) {
      cout << "*";
    }

    // spaces
    for (int p = 1; p <= (n - i); p++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
