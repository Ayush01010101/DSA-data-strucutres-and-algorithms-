#include <iostream>
using namespace std;
int main() {
  int n = 1;
  cout << "Enter any number:";
  cin >> n;
  int count = (n * 2) - 2;
  int countTwo = 2;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    for (int j = 1; j <= count; j++) {
      cout << " ";
    }
    count = count - 2;
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = n - 1; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    for (int j = 1; j <= countTwo; j++) {
      cout << " ";
    }
    countTwo = countTwo + 2;

    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
