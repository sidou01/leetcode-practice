# Problem 1365

# Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it.
# That is, for each nums[i] you have to counter the number of valid j's such that j != i and nums[j] < nums[i].

# Return the answer in an array.

# Example 1:
# Input: nums = [8,1,2,2,3]
# Output: [4,0,1,1,3]
# Explanation: 
# For nums[0]=8 there exist four smaller numbers than it (1, 2, 2 and 3). 
# For nums[1]=1 does not exist any smaller number than it.
# For nums[2]=2 there exist one smaller number than it (1). 
# For nums[3]=2 there exist one smaller number than it (1). 
# For nums[4]=3 there exist three smaller numbers than it (1, 2 and 2).

# Example 2:
# Input: nums = [6,5,4,8] --> [4,5,6,8]
# Output: [2,1,0,3]

from typing import List

#optimize this solution cuz it sucks (complexity is: N*N)
# Implement a solution where we sort the input array first.
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        # counter the number of js such as j!=i and nums[j] < nums[i].

        counter = 0
        output = []
        for i in range(len(nums)):
            for j in range(len(nums)):
                if j != i and nums[j] < nums[i]:
                    counter += 1
            output.append(counter)
            counter = 0

        return output


s = Solution()
print("Output:", s.smallerNumbersThanCurrent([6,5,4,8]))
