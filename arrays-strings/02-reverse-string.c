#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0, right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    // Test Case 1: Typical case
    char s1[] = "hello";
    reverseString(s1, strlen(s1));
    printf("Test 1: %s (Expected: olleh)\n", s1);

    // Test Case 2: Edge case (single character)
    char s2[] = "A";
    reverseString(s2, strlen(s2));
    printf("Test 2: %s (Expected: A)\n", s2);

    return 0;
}