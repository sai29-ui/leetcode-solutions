## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Tracked the lowest stock price seen so far (`minPrice`) while scanning the array in a single pass. At each day, updated the maximum profit if selling on that day yielded a higher difference than the current best.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Initializing `maxProfit` to `0` automatically handles edge cases where prices strictly decrease and no profitable transaction is possible.