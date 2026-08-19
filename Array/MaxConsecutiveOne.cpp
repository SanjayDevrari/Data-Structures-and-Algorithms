/*
    Max Consecutive Ones
    LeetCode #485

    --------------------------------------------------
    Problem Statement
    --------------------------------------------------

    Given a binary array nums, return the maximum number
    of consecutive 1s in the array.

    --------------------------------------------------
    Example 1
    --------------------------------------------------

    Input:
        nums = [1, 1, 0, 1, 1, 1]

    Output:
        3

    Explanation:
        The first two elements contain 2 consecutive 1s,
        while the last three elements contain 3 consecutive
        1s.

        Therefore, the maximum number of consecutive 1s is 3.

    --------------------------------------------------
    Example 2
    --------------------------------------------------

    Input:
        nums = [1, 0, 1, 1, 0, 1]

    Output:
        2

    --------------------------------------------------
    Approach
    --------------------------------------------------

    We maintain two variables:

        count  -> stores the current consecutive count of 1s
        answer -> stores the maximum count found so far

    For every element:

        - If the element is 1:
            Increase count by 1.
            Update answer with the maximum of count and answer.

        - If the element is 0:
            Reset count to 0 because the sequence of consecutive
            1s has been broken.

    --------------------------------------------------
    Algorithm
    --------------------------------------------------

    1. Initialize count = 0.
    2. Initialize answer = 0.
    3. Traverse the array.
    4. If nums[i] == 1:
           count++
           update answer
    5. Otherwise:
           reset count = 0
    6. Return answer.

    --------------------------------------------------
    Complexity Analysis
    --------------------------------------------------

    Time Complexity:
        O(n)

    The array is traversed only once.

    Space Complexity:
        O(1)

    Only two extra variables are used.

    --------------------------------------------------
    Key Concept
    --------------------------------------------------

    Whenever a 0 is encountered, the consecutive sequence
    of 1s ends, so we reset the current count to 0.

    The maximum value of count during the traversal is
    the answer.
*/

// Code

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int answer = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                answer = max(answer, count);
            }
            else {
                count = 0;
            }
        }

        return answer;
    }
};