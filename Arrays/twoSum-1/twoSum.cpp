/* Problem #1 */

/* Given an array of integers, return indices of the two numbers such that they add up to a specific target. */

/* You may assume that each input would have exactly one solution, and you may not use the same element twice. */

/* Example: */

/* Given nums = [2, 7, 11, 15], target = 9, */

/* Because nums[0] + nums[1] = 2 + 7 = 9, */
/* return [0, 1]. */

#include <iostream>
#include <vector>

using namespace std;

void print_arr(vector<int>& nums)
{
  cout << "----Printing values of an array----" << endl;
  for(int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

class Solution
{
  public:
    /* Slow Solution: N*N */
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int> output;
      for(int i=0; i<nums.size(); i++) {
	for(int j = i + 1; j < nums.size(); j++) {
	  if(nums[i] + nums[j] == target) {
	    output.push_back(i);
	    output.push_back(j);
	    return output;
	  }
	}
      }
      return output;
    }
};

int main()
{
  Solution s = Solution();
  vector<int> input_arr = {2,7,11,15};

  vector<int> output_arr = s.twoSum(input_arr, 9);
  print_arr(output_arr);
  return 0;
}
