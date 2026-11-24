## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Used two pointers (`left` and `right`) to repeatedly halve the sorted search space by comparing the middle element with `target`.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
Calculated `mid` as `left + (right - left) / 2` to avoid potential integer overflow on large array indices.