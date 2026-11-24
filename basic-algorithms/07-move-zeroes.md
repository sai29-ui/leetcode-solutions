## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a write-pointer (`insertPos`) to shift all non-zero elements to the front of the array in their original relative order, then filled the remaining trailing positions with `0`.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Modifies the array strictly in-place without allocating a secondary copy.