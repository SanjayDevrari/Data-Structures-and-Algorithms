/*
    Maximum Subarray
    LeetCode Problem

    --------------------------------------------------
    Problem Statement
    --------------------------------------------------

    Given an integer array nums, find the subarray with
    the largest sum and return its sum.

    A subarray is a contiguous part of the array.

    --------------------------------------------------
    Example 1
    --------------------------------------------------

    Input:
        nums = [-2,1,-3,4,-1,2,1,-5,4]

    Output:
        6

    Explanation:
        The subarray [4,-1,2,1] has the largest sum.

        4 + (-1) + 2 + 1 = 6

    --------------------------------------------------
    Example 2
    --------------------------------------------------

    Input:
        nums = [1]

    Output:
        1

    --------------------------------------------------
    Example 3
    --------------------------------------------------

    Input:
        nums = [5,4,-1,7,8]

    Output:
        23

    --------------------------------------------------
    Approach: Kadane's Algorithm
    --------------------------------------------------

    We use Kadane's Algorithm to find the maximum
    subarray sum in O(n) time.

    Two variables are used:

        arraysum -> stores the current subarray sum
        maxsum   -> stores the maximum sum found so far

    For every element:

        1. Add the current element to arraysum.
        2. Update maxsum with the maximum of arraysum
           and maxsum.
        3. If arraysum becomes negative, reset it to 0.

    Why reset arraysum?

    If the current subarray sum becomes negative, carrying
    this negative sum forward can only decrease the sum
    of a future subarray.

    Therefore, we start a new subarray from the next element.

    --------------------------------------------------
    Algorithm
    --------------------------------------------------

    1. Initialize arraysum = 0.
    2. Initialize maxsum = INT_MIN.
    3. Traverse the array.
    4. Add each element to arraysum.
    5. Update maxsum.
    6. If arraysum < 0, reset arraysum to 0.
    7. Return maxsum.

    --------------------------------------------------
    Complexity Analysis
    --------------------------------------------------

    Time Complexity:
        O(n)

    Space Complexity:
        O(1)

    --------------------------------------------------
    Key Concept
    --------------------------------------------------

    Kadane's Algorithm finds the maximum sum of a
    contiguous subarray by keeping track of the current
    sum and discarding it whenever it becomes negative.
*/

// Code
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int arraysum = 0;
        int maxsum = INT_MIN;

        int size = nums.size();

        for (int i = 0; i < size; i++) {
            arraysum += nums[i];

            maxsum = max(arraysum, maxsum);

            if (arraysum < 0) {
                arraysum = 0;
            }
        }

        return maxsum;
    }
};