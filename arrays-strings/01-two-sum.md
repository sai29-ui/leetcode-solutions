## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Used a nested loop brute-force approach to check every pair of elements `(i, j)` where `j > i`. Once a pair summing to `target` is found, their indices are stored in a dynamically allocated array and returned.

### Complexity
- Time: O(n^2)
- Space: O(1)

### Notes
Starting the inner loop at `i + 1` avoids reusing the same index when handling duplicate values. A hash map approach could optimize the time complexity to O(n) in the future.