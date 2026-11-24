#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";
    for (int i = 0; strs[0][i] != '\0'; i++) {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }
    return strs[0];
}

int main() {
    // Test Case 1: Typical common prefix
    char s1_0[] = "flower", s1_1[] = "flow", s1_2[] = "flight";
    char* strs1[] = {s1_0, s1_1, s1_2};
    printf("Test 1: %s (Expected: fl)\n", longestCommonPrefix(strs1, 3));

    // Test Case 2: Edge case (no common prefix)
    char s2_0[] = "dog", s2_1[] = "racecar", s2_2[] = "car";
    char* strs2[] = {s2_0, s2_1, s2_2};
    printf("Test 2: \"%s\" (Expected: \"\")\n", longestCommonPrefix(strs2, 3));

    return 0;
}