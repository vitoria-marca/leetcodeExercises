# Vitória Marca Santa Lucia
# https://leetcode.com/problems/reverse-only-letters/

class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        string_list = list(s)
        left, right = 0, len(string_list) - 1

        while left < right: #algorithm will close when they're in same spot
            if not string_list[left].isalpha():
                left+=1
            elif not string_list[right].isalpha():
                right-=1
            else:
                string_list[left], string_list[right] = string_list[right], string_list[left]
                left+=1
                right-=1
            
        return ''.join(string_list)

        