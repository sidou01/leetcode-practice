/* Problem 734 */

/* Given an array of integers nums, write a method that returns the "pivot" index of this array. */

/* We define the pivot index as the index where the sum of the numbers to the left of the index is equal to the sum of the numbers to the right of the index. */

/* If no such index exists, we should return -1. If there are multiple pivot indexes, you should return the left-most pivot index. */

/* Input: */ 
/* nums = [-1,-1,-1,0,1,1] */
/* Output: 0 */

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
    int pivotIndex(vector<int> nums)
    {
      if(nums.size() == 0) return -1;
      if(nums.size() == 1) return 0;

      int beforePivot = 0;
      int afterPivot = 0;

      for(int i = 1; i < nums.size(); i++)
	afterPivot += nums[i];

      for(int j=0; j < nums.size(); j++) {
	if(j > 0) {
	  beforePivot += nums[j-1];
	  afterPivot -= nums[j];
	}
	
	if(beforePivot == afterPivot)
	  return j;
      }

      return -1;
    }
};

void print_arr(vector<int> nums)
{
  cout << "----Printing values of an array----" << endl;
  for(int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

int main()
{

  vector<int> arr{1, 7, 3, 6, 5, 6};
  Solution s;
  int value = s.pivotIndex(arr);

  cout << "Value: " << value << endl;

  return 0;
}