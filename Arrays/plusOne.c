#include <stdio.h>
#include <stdlib.h>

/** * Note: The returned array must be malloced, assume caller calls free(). */

/* Input: [1,2,3] */
/* Output: [1,2,4] */
/* Explanation: The array represents the integer 123. */

/* Thinking: */
/*  If last number is not a 9 then increment by 1. */
/*  If last number is a 9 then change it to 0 and check the element last - 1 if it's a 9, */
/*  If yes then change it to 0 and check the next element from the right. */
/*  If we reach the last element going right-to-left then we use realloc to change the size of the ptr. (Example of that is [9,9,9,9] --> [1,0,0,0,0]). */


int* plusOne(int *digits, int digitsSize, int* returnSize)
{
  if (digits == NULL || returnSize == NULL) {
      printf("[Error]: Please check your array and returnSize for a NULL value\n");
      return NULL;
  }

  int i = digitsSize - 1;

  while(i>=0) {
    if(digits[i] != 9) {
      digits[i]++;
      *returnSize = digitsSize; 
      return digits;
    }
    else {
      digits[i] = 0;
      i--; 
    }
  }
  
  int* newDigits = (int*)malloc((digitsSize + 1) * sizeof(int));

  *returnSize = digitsSize + 1;
  newDigits[0] = 1;

  for(int i = 1; i<digitsSize+1; i++) {
    newDigits[i] = digits[i-1];
  }

  return newDigits;
}


//TODO: Move this to utils file.
void print_arr(int *digits, int* size)
{
  if(digits == NULL || size == NULL) { 
    printf("[Error] cannot print values (array or size is null)\n");
    return;
  }

  printf("[Printing the values of a dynamically allocated array]:\n");

  for(int i=0; i<(*size); i++) {
    printf("%d\t", digits[i]);
  }
  printf("\n");
}

int main()
{
  /* https://stackoverflow.com/questions/8316030/iterate-a-dynamically-allocated-array */

  /* Cannot find the size of a dynamically allocated array. */
  /* So solution is to keep track of the size by yourself (by using a ptr like returnSize). */
  /* All malloc gives you is a ptr to a unditerminate amount of memory ! */

  int* numbers = (int*)malloc(3 * sizeof(int));
  int* returnSize;

  *returnSize = 3;
  numbers[0] = 9;
  numbers[1] = 5;
  numbers[2] = 9;

  print_arr(numbers, returnSize);
  int *newDigits = plusOne(numbers, 3, returnSize);
  print_arr(newDigits, returnSize);

  return 0;
}
