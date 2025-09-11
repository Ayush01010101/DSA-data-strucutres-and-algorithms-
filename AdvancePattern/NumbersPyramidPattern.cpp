#include <iostream>
using namespace std;
int main() {
  int n = 0;
  cout << "Enter any number";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    int count = 1;
    // spaces
    for (int j = 1; j <= (n - i); j++) {
      cout << " ";
    }

    // starts
    for (int j = 1; j <= (i * 2) - 1; j++) {
      cout << count;
      if (count >= i) {
        count--;
      } else {
        count++;
      }
    }

    // spaces
    for (int j = 1; j <= (n - i); j++) {
      cout << " ";
    }
    cout << endl;
  }
  return 0;
}
