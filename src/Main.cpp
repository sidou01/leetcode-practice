/* Include solutions as header files */
#include <iostream>
#include "lt_array.h"

using namespace std;


int main()
{
  vector<int> nums = {0,0,1};
  moveZeroes(nums);
  cout << '\n';
  print_arr(nums);
  return 0;
}
