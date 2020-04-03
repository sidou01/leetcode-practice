/* Include solutions as header files */
#include <iostream>
#include "lt_array.h"

using namespace std;


int main()
{
  bool isH = isHappy(2);
  cout << "isHappy: " << (isH == 1 ? "true" : "false") << '\n';
  return 0;
}
