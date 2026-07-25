const array = [5, 22, 33, 45, 101]
function sumoftargetedNumber(targedsum: number = 4) {

  let left = 0
  let right = array.length - 1

  while (left <= right) {

    if ((array[left] + array[right]) < targedsum) {
      left = left + 1
    } else if ((array[left] + array[right]) == targedsum) {
      return [left, right]
    } else {
      right = right - 1
    }

  }
  return "Invalid Array Provided"
}

const result = sumoftargetedNumber(146)


if (typeof result == 'object') {

  console.log(array[result[0]], array[result[1]])
}

