/**
 * https://leetcode.com/problems/palindrome-number
 * Vitória M S Lucia
 */

bool isPalindrome(int x) {

    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int i;
    int length = snprintf( NULL, 0, "%d", x );
    char* str = malloc( length + 1 );
    char* str_inversa = malloc(length + 1);
    snprintf( str, length + 1, "%d", x );

    for (i=0; i < length; i++){
        str_inversa[length - 1 - i] = str[i];
    }
    str_inversa[length] = '\0';

    bool result = strcmp(str, str_inversa) == 0;
    free(str);
    free(str_inversa);

    return result;
}