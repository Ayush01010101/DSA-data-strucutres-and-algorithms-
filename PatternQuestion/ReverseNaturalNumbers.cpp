#include <iostream>
using namespace std;
int main() {
  int row, col = 1;
  cout << "Enter row";
  cin >> row;
  cout << "Enter col";
  cin >> col;

  for (int i = 1; i <= row; i++) {
    for (int j = col; j >= 1; j--) {
      cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}
