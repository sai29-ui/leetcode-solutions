## Problem: Reverse String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/

### Approach
Used a two-pointer technique starting at the first and last indices of the character array. Swapped characters inward until the two pointers met in the middle, modifying the string in-place.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Single-character or empty strings are handled cleanly because the `left < right` condition skips swapping when `sSize <= 1`.