#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter any number";
  cin >> n;
  for (int i = 'a'; i < ('a' + n); i++) {
    for (int j = 'a'; j <= i; j++) {
      cout << char(i) << " ";
    }
    cout << endl;
  }
  return 0;
}
