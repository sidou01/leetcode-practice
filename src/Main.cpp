/* Include solutions as header files */
#include <iostream>
#include "lt_array.h"

using namespace std;

int main()
{
    vector<int> nums = {4,1,2,1,2};
    // std::cout << "Value: " << value << std::endl;
    int returnValue = singleNumber(nums);
    cout << "Single Number: " << returnValue << '\n';
    return 0;
}
