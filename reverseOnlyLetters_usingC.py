# Vitória Marca Santa Lucia
# https://leetcode.com/problems/reverse-only-letters/

char* reverseOnlyLetters(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
        if (!isalpha(s[left])){
            left ++;
        } else if (!isalpha(s[right])){
            right --;
        } else {
            char temp = s[left];
            
            s[left] = s[right];
            s[right] = temp;
            
            left ++;
            right --;
        }
    
    return s;    
}
        