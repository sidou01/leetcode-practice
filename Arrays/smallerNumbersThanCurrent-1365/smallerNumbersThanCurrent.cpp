 /* Problem 1365 */

 /* Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. */
 /* That is, for each nums[i] you have to counter the number of valid j's such that j != i and nums[j] < nums[i]. */

 /* Return the answer in an array. */

 /* Example 1: */
 /* Input: nums = [8,1,2,2,3] */
 /* Output: [4,0,1,1,3] */
 /* Explanation: */ 
 /* For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). */ 
 /* For nums[1]=1 does not exist any smaller number than it. */
 /* For nums[2]=2 there exist one smaller number than it (1). */ 
 /* For nums[3]=2 there exist one smaller number than it (1). */ 
 /* For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2). */

 /* Example 2: */
 /* Input: nums = [6,5,4,8] --> [4,5,6,8] */
 /* Output: [2,1,0,3] */

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

class Solution {
  public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
      int counter = 0;
      vector<int> output;

      for(int i=0; i < nums.size(); i++) {
	for(int j = 0; j < nums.size(); j++) {
	  if(j != i && nums[j] < nums[i])
	    counter++;
	}
	output.push_back(counter);
	counter = 0;
      }
      return output;
    }
    vector<int> smallerNumbersThanCurrent_v2(vector<int>& nums) {
      /* TODO: sort the array first */
    }
};

int main()
{

  Solution solution;
  vector<int> list{6,5,4,8};
  vector<int> output = solution.smallerNumbersThanCurrent(list);
  print_arr(output);

  return 0;
}
