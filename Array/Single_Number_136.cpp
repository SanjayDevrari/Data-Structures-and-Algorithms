/*
    Single Number
    LeetCode Problem

    --------------------------------------------------
    Problem Statement
    --------------------------------------------------

    Given a non-empty array of integers nums, every
    element appears twice except for one element that
    appears only once.

    Find and return the element that appears only once.

    Requirements:
    - Time Complexity: O(n)
    - Extra Space: O(1)

    --------------------------------------------------
    Examples
    --------------------------------------------------

    Example 1:
    Input:  nums = [2, 2, 1]
    Output: 1

    Example 2:
    Input:  nums = [4, 1, 2, 1, 2]
    Output: 4

    Example 3:
    Input:  nums = [1]
    Output: 1

    --------------------------------------------------
    Approach
    --------------------------------------------------

    We use the XOR (^) operator.

    Important XOR properties:

        a ^ a = 0
        a ^ 0 = a

    XOR is commutative and associative, so the order
    of elements does not matter.

    Example:

        [4, 1, 2, 1, 2]

        4 ^ 1 ^ 2 ^ 1 ^ 2

    Duplicate elements cancel each other:

        1 ^ 1 = 0
        2 ^ 2 = 0

    Therefore:

        4 ^ 0 ^ 0 = 4

    The remaining value is the single number.

    --------------------------------------------------
    Algorithm
    --------------------------------------------------

    1. Initialize result = 0.
    2. Traverse every element of the array.
    3. XOR each element with result.
    4. Return result.

    --------------------------------------------------
    Complexity Analysis
    --------------------------------------------------

    Time Complexity:
        O(n)

    Space Complexity:
        O(1)

    Only one extra variable, result, is used.

    --------------------------------------------------
    Key Concept
    --------------------------------------------------

    XOR can be used to find a unique element when
    every other element appears exactly twice.

        a ^ a = 0
        a ^ 0 = a

    Hence, all duplicate elements cancel out and
    only the unique element remains.
*/

// Code
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int val : nums) {
            result = result ^ val;
        }

        return result;
    }
};