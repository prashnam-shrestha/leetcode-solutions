class Solution:
    def isPalindrome(self, s: str) -> bool:
        filtered_s = []

        for char in s:
            if char.isalnum():
                filtered_s.append(char.lower())

        s = " ".join(filtered_s)
        return s == s[::-1]
        