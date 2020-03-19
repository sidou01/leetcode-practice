#include <iostream>
#include <vector>

/* Utility Functions */

void print_arr(vector<int>& nums)
{
  cout << "----Printing values of an array----" << endl;
  for(int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}
