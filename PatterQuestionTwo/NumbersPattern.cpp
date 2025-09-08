#include <iostream>
using namespace std;
int main() {
  int row;
  cout << "Enter any number";
  cin >> row;
  for (int i = 0; i < row; i++) {
    for (int j = row; (j + i) >= row; j--) {
      cout << j << " ";
    }
    cout << endl;
  }
}
