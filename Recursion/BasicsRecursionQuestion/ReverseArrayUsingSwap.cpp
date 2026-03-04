#include <iostream>
#include <utility>
using namespace std;
void reverse(int firstpointer, int size, int nums[5]) {
  if (firstpointer >= size / 2) {
    return;
  }

  swap(nums[firstpointer], nums[(size)-firstpointer - 1]);
  reverse(firstpointer + 1, size, nums);
}
int main() {
  int length;
  cout << "enter the lenght of array";
  cin >> length;
  int nums[length];
  for (int i = 0; i < length; i++) {
    cin >> nums[i];
  }
  reverse(0, length, nums);
  for (int i = 0; i < length; i++) {
    cout << nums[i] << " ";
  }
  return 0;
}
