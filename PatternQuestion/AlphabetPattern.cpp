#include <iostream>
using namespace std;
void solution(int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 'a'; j < ('a' + col); j++) {
      cout << char(j) << " ";
    }
    cout << endl;
  }
}

int main() {
  int row, col = 0;
  cout << "enter row";
  cin >> row;
  cout << "enter col ";
  cin >> col;
  solution(row, col);
  cout << endl;
  cout << endl;
  cout << endl;
  for (int i = 'a'; i < ('a' + row); i++) {

    for (int j = 1; j <= col; j++) {
      char str = i;
      cout << str << " ";
    }
    cout << endl;
  }
  return 0;
}
