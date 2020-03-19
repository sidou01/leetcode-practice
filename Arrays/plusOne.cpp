/* Problem 66 */

/** * Note: The returned array must be malloced, assume caller calls free(). */

/* Input: [1,2,3] */
/* Output: [1,2,4] */
/* Explanation: The array represents the integer 123. */

/* Thinking: */
/*  If last number is not a 9 then increment by 1. */
/*  If last number is a 9 then change it to 0 and check the element last - 1 if it's a 9, */
/*  If yes then change it to 0 and check the next element from the right. */
/*  If we reach the last element going right-to-left then we use realloc to change the size of the ptr. (Example of that is [9,9,9,9] --> [1,0,0,0,0]). */

#include <iostream>
#include <vector>


class Solution {

  public:
    int* plusOne(vector<int>& digits)
    {
      if(digits == NULL) {
	printf("[Error]: Please check your array and returnSize for a NULL value\n");
	return NULL;
      }
      int i = digits.size() - 1;
      while(i>=0) {
	if(digits[i] != 9) {
	  digits[i]++;
	  return digits;
	}
	else {
	  digits[i] = 0;
	  i--;
	}
      }

      int* newDigits = (int*)malloc((digitsSize + 1) * sizeof(int));
      newDigits[0] = 1;

      for(int i = 1; i<digits.size() + 1; i++) {
	newDigits[i] = digits[i-1];
      }

      return newDigits;
    }

};


int main()
{

  return 0;
}
