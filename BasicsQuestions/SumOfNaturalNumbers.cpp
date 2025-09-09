#include <iostream>
using namespace std;
int alternativeSolution(int n) { return (n * (n + 1)) / 2; }
int main() {
  int n;
  cout << "enter number";
  cin >> n;
  cout << alternativeSolution(n) << "ans";
  int result = 0;
  for (int i = 1; i <= n; i++) {
    result = result + i;
  }
  cout << "ans is " << result;
  return 0;
}
