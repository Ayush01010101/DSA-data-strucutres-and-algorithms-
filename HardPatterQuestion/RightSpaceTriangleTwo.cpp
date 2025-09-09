#include <iostream>
using namespace std;
int main() {

  int n = 0;
  cout << "Enter a number";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    // space
    for (int j = 0; j < (n - i); j++) {
      cout << " ";
    }

    // stars
    for (int k = 1; k <= i; k++) {
      cout << k;
    }
    cout << endl;
  }
  return 0;
}
