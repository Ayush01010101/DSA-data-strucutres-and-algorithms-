
var twoSum = function(numbers, target) {
  let left = 0
  let right = numbers.length - 1

  while (left < right) {
    const twopointeraddition = numbers[left] + numbers[right]
    if (twopointeraddition == target) {
      return [left + 1, right + 1]

    } else if (twopointeraddition > target) {
      right--
    } else {
      left++
    }
  }

  return false;

};
