class Solution {
public:
    bool isPalindrome(string s) {
        // CLEAN
        string text = "";

        for (char i: s) {
            if (isalnum(i)) {
                text += tolower(i);
            }
        }

        int left = 0;
        int right = text.length() - 1;

        while (left < right) {
            
            if (text.at(left) != text.at(right)) {
                return false;
            }
            left ++;
            right --;
        }
        return true;
    }
};