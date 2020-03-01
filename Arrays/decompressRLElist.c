#include <stdio.h>
#include <stdlib.h>

/* Problem 1313 */

/* We are given a list nums of integers representing a list compressed with run-length encoding. */

/* Consider each adjacent pair of elements [a, b] = [nums[2*i], nums[2*i+1]] (with i >= 0).  For each such pair, there are a elements with value b in the decompressed list. */

/* Return the decompressed list. */

/* Input: nums = [1,2,3,4] */
/* Output: [2,4,4,4] */
/* Explanation: The first pair [1,2] means we have freq = 1 and val = 2 so we generate the array [2]. */
/* The second pair [3,4] means we have freq = 3 and val = 4 so we generate [4,4,4]. */
/* At the end the concatenation [2] + [4,4,4] is [2,4,4,4]. */

/* Thinking */
Each time we grab 2 numbers, first one is frequency and the second one is the value.
Loop with condition i<freq and keep track of how many values inserted in the dynamically allocated array.

int* decompressRLElist(int* nums, int numsSize, int* returnSize)
{
  //calc the size of the malloced array.

  //insert based on the pairs [nums[2*i], nums[2*i+1]] which represents the (freq, value).
}


int main()
{

  return 0;
}
