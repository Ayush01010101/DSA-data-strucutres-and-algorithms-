#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter number";
  cin >> n;
  int result = 0;
  for (int i = 1; i <= n; i++) {
    int square = i * i;
    result = square + result;
  }
  cout << "ans is " << result;
}
