#include <stdio.h>

/* Problem 734 */

/* Given an array of integers nums, write a method that returns the "pivot" index of this array. */

/* We define the pivot index as the index where the sum of the numbers to the left of the index is equal to the sum of the numbers to the right of the index. */

/* If no such index exists, we should return -1. If there are multiple pivot indexes, you should return the left-most pivot index. */

/* Input: */ 
/* nums = [-1,-1,-1,0,1,1] */
/* Output: 0 */

int pivotIndex(int* nums, int numSize)
{

  if(numSize == 0) return -1;
  if(numSize == 1) return 0;

  int beforePivot = 0;
  int afterPivot = 0;

  for (int i = 1; i < numSize; i++) {
    afterPivot += nums[i];
  }

  for (int j = 0; j < numSize; j++) {

    if(j > 0) {
      beforePivot += nums[j-1];
      afterPivot -= nums[j];
    }

    if(beforePivot == afterPivot) {
      return j;
    }
  }

  return -1;

}

int main()
{

  int arr[] = {-1, -1, -1, 0, 1, 1};
  int sizeOfArr = sizeof(arr) / sizeof(int);
  int value = pivotIndex(arr, sizeOfArr);

  printf("%d\n", value);

  return 0;
}













