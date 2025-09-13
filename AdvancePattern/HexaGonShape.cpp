#include <iostream>
using namespace std;
int main() {
  int n = 1;
  cout << "Enter Any Number";
  cin >> n;
  int count = (n * 2) - 2;
  for (int i = 1; i <= (n * 2); i++) {
    if (i > n) {
      for (int j = 1; j <= i - n; j++) {
        cout << "*";
      }
      for (int j = 1; j <= count; j++) {
        cout << " ";
      }
      count = count - 2;
      for (int j = 1; j <= i - n; j++) {
        cout << "*";
      }

    } else {

      for (int j = n; j >= i; j--) {
        cout << "*";
      }
      for (int j = 1; j <= (i * 2) - 2; j++) {
        cout << " ";
      }
      for (int j = n; j >= i; j--) {
        cout << "*";
      }
    }
    cout << endl;
  }

  return 0;
}
