/* Problem 747 */

/* In a given integer array nums, there is always exactly one largest element. */

/* Find whether the largest element in the array is at least twice as much as every other number in the array. */

/* If it is, return the index of the largest element, otherwise return -1. */

/* Input: nums = [3, 6, 1, 0] */
/* Output: 1 */
/* Explanation: 6 is the largest integer, and for every other number in the array x, */
/* 6 is more than twice as big as x.  The index of value 6 is 1, so we return 1. */

#include <iostream>
#include <vector>

using namespace std;

class Solution {

  public:

    int dominantIndex(vector<int>& nums)
    {

      if(nums.size() == 0) return -1;
      if(nums.size() == 1) return 0;

      int dominantIndex = 0;

      for(int i = 0; i < nums.size(); i++) {
	if(nums[i] > nums[dominantIndex]){
	  dominantIndex = i;
	}
      }

      for(int i = 0; i < nums.size(); i++) {
	if(2*nums[i] > nums[dominantIndex] && nums[i] != nums[dominantIndex]) {
	   printf("%d\n", nums[i]);
	   cout << nums[i] << endl;
	   return -1;
	}
      }

      return dominantIndex;
    }
};

int main()
{

  Solution s;
  vector<int> arr{3, 6, 1, 0};
  int result = s.dominantIndex(arr);
  cout << "Value: " << result << endl;

  return 0;
}

