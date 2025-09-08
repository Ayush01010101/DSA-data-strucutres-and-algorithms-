#include <iostream>
using namespace std;

int main() {
  int row, col;
  cout << "Enter How many Lines you want";
  cin >> row;
  cout << "Enter how many columns you want";
  cin >> col;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}
