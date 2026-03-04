#include <iostream>
using namespace std;
int reverseArray(int array[5], int firstpointer = 0, int secondpointer = 5) {
  if (firstpointer >= secondpointer) {
    for (int i = 0; i < 5; i++) {
      cout << array[i] << " ";
    }

    return 0;
  }
  int temp = array[firstpointer];
  array[firstpointer] = array[secondpointer - 1];
  array[secondpointer - 1] = temp;
  // cout << endl;
  return reverseArray(array, firstpointer + 1, secondpointer - 1);
}

int main() {
  int array[5] = {1, 2, 3, 4, 5};
  reverseArray(array);
  return 0;
}
