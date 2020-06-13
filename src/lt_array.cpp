#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 *@param vector
 *@return Prints values in that vector or empty vector.
 */
void print_arr(vector<int>& nums)
{
    cout << "----Printing values of an array----" << endl;
    if(nums.size() > 0) {
        for(size_t i = 0; i < nums.size(); i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "[]" << endl;
    }
}


/**
   @param num vector and a integer target
   @return a vector that contains two indices i and j where nums[i] + nums[j] = target.
 */
vector<int> twoSum(vector<int> nums, int target)
{
  vector<int> output;

  for(vector<int>::size_type i=0; i !=nums.size(); i++) {

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

/**
   @param num vector and a integer target
   @return a vector that contains two indices i and j where nums[i] + nums[j] = target.
*/
vector<int> twoSum_v2(vector<int>& nums, int target)
{
    vector<int> output;
    /* Better Solution */
    return output;
}

vector<int> smallerNumbersThanCurrent(vector<int>& nums)
{
    int counter = 0;
    vector<int> output;

    for(vector<int>::size_type i=0; i != nums.size(); i++) {
        for(int j = 0; j < nums.size(); j++) {
            if(j != i && nums[j] < nums[i]) {
                counter++;
            }
        }
        output.push_back(counter);
        counter = 0;
    }
    return output;
}
vector<int> smallerNumbersThanCurrent_v2(vector<int>& nums)
{
    /* TODO: sort the array first */
    /* Get the index of the value from the sorted array */
    return {};
}

int pivotIndex(vector<int> nums)
{
    if(nums.size() == 0){ return -1; }
    if(nums.size() == 1) { return 0; }

    int beforePivot = 0,
        afterPivot = 0;

    for(int i = 1; i < nums.size(); i++) { afterPivot += nums[i]; }

    for(vector<int>::size_type j=0; j != nums.size(); j++) {
        if(j > 0) {
            beforePivot += nums[j-1];
            afterPivot -= nums[j];
        }
        if(beforePivot == afterPivot) { return j; }
    }
    return -1;
}

int findNumbers(vector<int>& nums)
{
    int counter = 0;
    for(int i=0; i < nums.size(); i++) { if(to_string(nums[i]).size() % 2 == 0) { counter++; } }
    return counter;
}

int dominantIndex(vector<int>& nums)
{
    if(nums.size() == 0) return -1;
    if(nums.size() == 1) return 0;

    int dominantIndex = 0;
    for(int i = 0; i < nums.size(); i++) { if(nums[i] > nums[dominantIndex]){ dominantIndex = i; } }

    for(vector<int>::size_type i = 0; i != nums.size(); i++) {
        if(2*nums[i] > nums[dominantIndex] && nums[i] != nums[dominantIndex]) {
            printf("%d\n", nums[i]);
            return -1;
        }
    }
    return dominantIndex;
}

vector<int> createTargetArray(vector<int>& nums, vector<int>& index)
{
    vector<int> target;
    for(vector<int>::size_type i = 0; i != nums.size(); i++) { target[index[i]] = nums[i]; }
    return target;
}

/* space complexity O(1) and time complexity is O(n) */
int singleNumber(vector<int>& nums)
{
  if(nums.size() == 1) { return nums[0]; }

  int returnValue = 0;
  for(auto const& value: nums) {
    returnValue ^= value;
  }

  return returnValue;
}

bool isHappy(int number)
{
  if(number == 1) { return true; }
  int result = 0;
    while(true) {
      while(number != 0) {
	result += (number % 10) * (number % 10);
	number = number / 10;
      }

      if(result >= 1 && result <= 9) {
	if(result == 1 || result == 7) { return true; }
	else { return false; }
      }

      number = result;
      result = 0;
    }
    return true;
}

/* O(n) solution */
void moveZeroes(vector<int>& nums)
{
  unsigned count = 0, i = 0;
  while(i < nums.size()) {
    if(nums[i] == 0) {
      nums.erase(nums.begin() + i);
      count++;
    }
    else { i++; }
  }
  /* add 0s at the end */
  for(int i = 0; i < count; i++) {
    nums.push_back(0);
  }
}

int maxSubArray(vector<int>& nums)
{
  return -1;
}

vector<int> sortedSquares(vector<int> &A) {
    vector<int> result;    
    int i = 0;
    while(i < A.size() && A[i] < 0)
        i++;

    int j = i - 1;

    while(i < A.size() && j >= 0)
    {
        if(A[i] * A[i] < A[j] * A[j])
        {
            result.push_back(A[i] * A[i]);
            i++;
        }
        else
        {
            result.push_back(A[j] * A[j]);
            j--;    
        }
    }

    while(i < A.size())
    {
        result.push_back(A[i] * A[i]);
        i++;
    }
    while(j >= 0)
    {
        result.push_back(A[j] * A[j]);
        j--;
    }

    return result;
}

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies) {
    vector<bool> output;
    int maxCandies = 0;
    for(int j = 0; j < candies.size(); j++)
        if(maxCandies < candies[j]) 
            maxCandies = candies[j];
    
    for(int i = 0; i < candies.size(); i++)
    {
        if((candies[i] + extraCandies) >= maxCandies) output.push_back(true);
        else output.push_back(false);
    }
    
    return output;
}

int removeDuplicates(vector<int> &nums) {
    if(nums.size() == 0) return 0;
    int i = 0;

    for(int j = 1; j < nums.size(); j++) {
        if(nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}


bool checkIfExist(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++) {
        int target = arr[i] * 2;
        int begin = 0;
        int end = arr.size() - 1;
        int mid = (begin + end) / 2;
        
        while(begin <= end) {
            if(arr[mid] == target && mid != i) return true;
            else if(arr[mid] > target) end = mid - 1;
            else begin = mid + 1;

            mid = (begin + end) / 2;
        }
     }

     return false;
}
