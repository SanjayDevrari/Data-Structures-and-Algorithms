/*
    Problem: Best Time to Buy and Sell Stock
    LeetCode: 121
    Difficulty: Easy

    Problem Statement:
    Given an array of stock prices where prices[i] represents the
    price of the stock on the ith day, find the maximum profit
    that can be achieved by buying on one day and selling on a
    different day in the future.

    If no profit can be made, return 0.

    Approach:
    Greedy

    Idea:
    - Keep track of the minimum price seen so far.
    - For every current price, consider it as the selling price.
    - Calculate the current profit.
    - Keep updating the maximum profit.
    - If the current price is smaller than the minimum price,
      update it as the new minimum buying price.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // Store the minimum stock price seen so far.
        int minimumBuyPrice = prices[0];

        // Store the maximum profit found so far.
        int maximumProfit = 0;

        // Start from the second day because prices[0]
        // is already considered as the initial buying price.
        for (int currentDay = 1; currentDay < prices.size(); currentDay++) {

            // Calculate profit if we sell on the current day.
            int currentProfit = prices[currentDay] - minimumBuyPrice;

            // Update maximum profit if the current profit is higher.
            maximumProfit = max(maximumProfit, currentProfit);

            // Update the minimum buying price if today's price
            // is lower than the previous minimum.
            minimumBuyPrice = min(minimumBuyPrice, prices[currentDay]);
        }

        return maximumProfit;
    }
};