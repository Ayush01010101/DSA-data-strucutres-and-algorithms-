#include <iostream>
using namespace std;
int main() {
  int row, col, counter = 0;
  cout << "Enter any Numbers";
  cin >> row >> col;

  for (int i = 1; i <= row; i++) {
    for (int j = 0; j < col; j++) {
      counter++;
      cout << counter << " ";
    }
    cout << endl;
  }

  return 0;
}
