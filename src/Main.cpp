/* Include solutions as header files */
#include <iostream>
#include "lt_array.h"

int main()
{
    std::vector<int> arr{1, 7, 3, 6, 5, 6};
    int value = pivotIndex(arr);
    std::cout << "Value: " << value << std::endl;
    return 0;
}
