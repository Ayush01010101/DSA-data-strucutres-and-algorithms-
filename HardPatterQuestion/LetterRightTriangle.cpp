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
    for (int k = 'a'; k < 'a' + i; k++) {
      cout << char(k);
    }
    cout << endl;
  }
  return 0;
}
