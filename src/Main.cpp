/* Include solutions as header files */
#include <iostream>
#include "lt_array.h"


int main()
{
    std::vector<int> nums = {-4,-1,0,3,10};
    std::vector<int> result = sortedSquares(nums);
    
    for(auto const &value: result)
    {
        std::cout << value << " ";
    }
    std::cout << '\n';
  return 0;
}
