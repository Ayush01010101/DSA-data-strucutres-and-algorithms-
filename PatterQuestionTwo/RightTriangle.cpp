#include <iostream>
using namespace std;
void Solution(int row) {
  for (int i = 1; i <= row; i++) {
    for (int j = 0; j < i; j++) {
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}
void Numbers(int row) {
  for (int i = 1; i <= row; i++) {
    for (int j = 0; j < i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
}
int main() {

  int row = 0;
  cout << "Enter your number";
  cin >> row;

  Numbers(row);
  cout << endl;
  cout << endl;
  cout << endl;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < (i + 1); j++) {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}
