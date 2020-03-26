#include <iostream>
#include <vector>

using namespace std;

/*
 *@param vector
 *@return Prints values in that vector or empty vector.
 */
void print_arr(vector<int>& nums)
{
    cout << "----Printing values of an array----" << endl;
    if(nums.size() > 0) {
        for(int i = 0; i < nums.size(); i++) {
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

    for(int i=0; i<nums.size(); i++) {

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

    for(int i=0; i < nums.size(); i++) {
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

    for(int j=0; j < nums.size(); j++) {
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

    for(int i = 0; i < nums.size(); i++) {
        if(2*nums[i] > nums[dominantIndex] && nums[i] != nums[dominantIndex]) {
            printf("%d\n", nums[i]);
            cout << nums[i] << endl;
            return -1;
        }
    }
    return dominantIndex;
}

vector<int> createTargetArray(vector<int>& nums, vector<int>& index)
{
    vector<int> target;
    return target;
}