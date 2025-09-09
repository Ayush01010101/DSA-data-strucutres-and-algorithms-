#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "enter any number";
  cin >> n;

  int result = 1;
  for (int i = 1; i <= n; i++) {
    result = result * i;
  }
  cout << "ans is " << result;
}
