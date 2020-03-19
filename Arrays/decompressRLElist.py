# Problem 1313

# We are given a list nums of integers representing a list compressed with run-length encoding.

# Consider each adjacent pair of elements [a, b] = [nums[2*i], nums[2*i+1]] (with i >= 0).  For each such pair, there are a elements with value b in the decompressed list.

# Return the decompressed list.

# Input: nums = [1,2,3,4]
# Output: [2,4,4,4] */
# Explanation: The first pair [1,2] means we have freq = 1 and val = 2 so we generate the array [2].
# The second pair [3,4] means we have freq = 3 and val = 4 so we generate [4,4,4].
# At the end the concatenation [2] + [4,4,4] is [2,4,4,4].


from typing import List

class Solution:
    def __init__(self, nums: List[int]):
            self.nums = nums
    def decompressRLElist(self) -> List[int]:

        if(self.nums == None or len(self.nums) == 0):
            return []

        output = []
        for i in range(0, len(self.nums) - 1, 2):
            for j in range(self.nums[i]):
                output.append(self.nums[i+1])
            
            i += 2
         
        return output
            

s = Solution([1,2,3,4])
print("Array output:", s.decompressRLElist())
