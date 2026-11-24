## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Used vertical scanning by comparing characters column-by-column across all strings using the first string as the reference. As soon as a mismatch or end-of-string is encountered, the first string is null-terminated at that index and returned.

### Complexity
- Time: O(S) where S is the sum of all characters in all strings
- Space: O(1)

### Notes
Checking `strs[j][i] == '\0'` prevents reading past shorter strings in the array when the first string is longer.