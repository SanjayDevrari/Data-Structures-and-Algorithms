/*
    Missing Number
    LeetCode #268

    --------------------------------------------------
    Problem Statement
    --------------------------------------------------

    Given an array nums containing n distinct numbers
    in the range [0, n], return the only number in the
    range that is missing from the array.

    --------------------------------------------------
    Example 1
    --------------------------------------------------

    Input:
        nums = [3, 0, 1]

    Output:
        2

    Explanation:
        n = 3

        Complete range:
        [0, 1, 2, 3]

        Number 2 is missing.

    --------------------------------------------------
    Example 2
    --------------------------------------------------

    Input:
        nums = [0, 1]

    Output:
        2

    --------------------------------------------------
    Example 3
    --------------------------------------------------

    Input:
        nums = [9, 6, 4, 2, 3, 5, 7, 0, 1]

    Output:
        8

    --------------------------------------------------
    Approach: Mathematical Sum Formula
    --------------------------------------------------

    The array contains n distinct numbers from the
    range [0, n], with exactly one number missing.

    The sum of numbers from 0 to n can be calculated using:

        Sum = n * (n + 1) / 2

    We calculate:

        1. The expected sum of all numbers from 0 to n.
        2. The actual sum of elements present in the array.
        3. Subtract the actual sum from the expected sum.

    Therefore:

        Missing Number = Expected Sum - Actual Sum

    Example:

        nums = [3, 0, 1]

        n = 3

        Expected Sum:
        3 * (3 + 1) / 2 = 6

        Actual Sum:
        3 + 0 + 1 = 4

        Missing Number:
        6 - 4 = 2

    --------------------------------------------------
    Algorithm
    --------------------------------------------------

    1. Find n using nums.size().
    2. Calculate the expected sum from 0 to n.
    3. Calculate the actual sum of all array elements.
    4. Return expected sum - actual sum.

    --------------------------------------------------
    Complexity Analysis
    --------------------------------------------------

    Time Complexity:
        O(n)

    We traverse the array once.

    Space Complexity:
        O(1)

    Only a few integer variables are used.

    --------------------------------------------------
    Key Concept
    --------------------------------------------------

    Mathematical Sum Formula:

        0 + 1 + 2 + ... + n
        = n * (n + 1) / 2

    The difference between the expected sum and the
    actual array sum gives the missing number.
*/

// Code

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int actualSum = (n * (n + 1)) / 2;
        int arraySum = 0;

        for (int i = 0; i < n; i++) {
            arraySum += nums[i];
        }

        return actualSum - arraySum;
    }
};