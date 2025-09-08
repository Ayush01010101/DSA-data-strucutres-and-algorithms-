#include <iostream>
using namespace std;
void Solution(int row) {
  int count = 1;
  for (int i = 1; i <= row; i++) {

    for (int j = row; j >= i; j--) {
      cout << count << " ";
      count++;
    }
    count = 1;

    cout << endl;
  }
}
int main() {
  int n = 0;
  cout << "Enter any number";

  cin >> n;
  Solution(n);
  cout << endl;
  cout << endl;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i; j--) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}
