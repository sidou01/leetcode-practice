# Problem 734

# Given an array of integers nums, write a method that returns the "pivot" index of this array.

# We define the pivot index as the index where the sum of the numbers to the left of the index is equal to the sum of the numbers to the right of the index.

# If no such index exists, we should return -1. If there are multiple pivot indexes, you should return the left-most pivot index.

# Input:
# nums = [-1,-1,-1,0,1,1]
# Output: 0

from typing import List

def pivotIndex(nums: List) -> int:
    if len(nums)== 0:
        return -1
    if len(nums) == 1:
        return 0

    beforePivot = 0
    afterPivot = 0

    for i=1 in range(len(nums) + 1):
    for()
        afterPivot += nums[i]
    for j in range(len(nums) + 1):
        if j > 0:
            beforePivot += nums[j-1]
            afterPivot -= nums[j]

        if beforePivot == afterPivot:
            return j

    return -1

value = pivotIndex([10, 20, 30])
print("Value is: ", value)
