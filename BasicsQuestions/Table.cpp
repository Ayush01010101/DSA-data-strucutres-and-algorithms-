#include <iostream>
using namespace std;
int AlternativeSolution() {
  int n = 10;
  cout << "enter any number";
  cin >> n;
  for (int i = n; i <= n * 10; i = i + n) {
    cout << i << endl;
  }
  return 0;
}
int main() {
  AlternativeSolution();
  int n = 10;
  cout << "enter any number";
  cin >> n;

  for (int i = 1; i <= 10; i++) {

    cout << n << "*" << i << "=" << i * n << " " << endl;
    ;
  }
  return 0;
}
