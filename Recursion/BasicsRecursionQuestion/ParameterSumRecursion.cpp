#include <iostream>
using namespace std;
// sum recursion function
// parametervise way

int sumrecusrsion(int n, int sum = 0) { // base case
  cout << n << endl;
  if (n == 0) {
    return 0;
  }
  return sumrecusrsion(n - 1, sum + n);
}
int main() {
  int n;
  cout << "Enter any number";
  cin >> n;
  sumrecusrsion(n);

  return 0;
}

// dry return
// 0
// 5
// 4+5 =9
// 9+3 =12
// 12+2=14
// 0 is the case and it return the 0;
