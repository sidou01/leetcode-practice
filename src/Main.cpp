/* Include solutions as header files */
#include "lt_array.h"

int main()
{
    vector<int> arr{1, 7, 3, 6, 5, 6};
    int value = pivotIndex(arr);
    cout << "Value: " << value << endl;
    return 0;
}
