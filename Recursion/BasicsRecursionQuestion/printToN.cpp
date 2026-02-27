#include <iostream>
using namespace std;
int counter = 1;

int printToN(int num) {
  if (counter > num) {
    return 0;
  }
  cout << counter++ << endl;
  return printToN(num);
}

int main() {
  int n;
  cout << "Enter any number";
  cin >> n;
  printToN(n);
  return 0;
}
