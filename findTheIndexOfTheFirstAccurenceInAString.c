/*
 * https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 * Vitória M. S. Lucia
 */

int strStr(char* haystack, char* needle) {
    int len_needle = strlen(needle), len_haystack = strlen(haystack);
    if (len_needle == 0) return 0;
    if (len_haystack < len_needle) return -1;

    for (int i = 0; i <= len_haystack - len_needle; i++) {
        int j = 0;
        while (j < len_needle && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == len_needle) {
            return i;
        }
    }
    return -1;
}