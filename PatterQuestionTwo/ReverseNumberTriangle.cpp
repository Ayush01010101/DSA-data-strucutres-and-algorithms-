#include <iostream>
using namespace std;
int main() {
  int row = 0;
  cout << "enter your number";
  cin >> row;
  for (int i = 1; i <= row; i++) {
    for (int j = i; j >= 1; j--) {
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}
