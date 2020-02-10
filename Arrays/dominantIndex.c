#include <stdio.h>

/* Problem 747 */

/* In a given integer array nums, there is always exactly one largest element. */

/* Find whether the largest element in the array is at least twice as much as every other number in the array. */

/* If it is, return the index of the largest element, otherwise return -1. */

/* Input: nums = [3, 6, 1, 0] */
/* Output: 1 */
/* Explanation: 6 is the largest integer, and for every other number in the array x, */
/* 6 is more than twice as big as x.  The index of value 6 is 1, so we return 1. */

int dominantIndex(int* nums, int numsSize)
{
  if(numsSize == 0) return -1;
  if(numsSize == 1) return 0;

  int dominantIndex = 0;

  for(int i = 0; i < numsSize; i++) {
    if(nums[i] > nums[dominantIndex]){
      dominantIndex = i;
    }
  }

  for(int i = 0; i < numsSize; i++) {
    if(2*nums[i] > nums[dominantIndex] && nums[i] != nums[dominantIndex]) {
       printf("%d\n", nums[i]);
       return -1;
    }
  }

  return dominantIndex;
}


int main()
{
  

  int arr[] = {3, 6, 1, 0};
  int result = dominantIndex(arr, sizeof(arr) / sizeof(int));
  printf("%d\n", result);

  return 0;
}
