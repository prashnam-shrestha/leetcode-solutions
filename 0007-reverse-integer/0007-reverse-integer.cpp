class Solution {
public:
    int reverse(int x) { // TC: O(Log10 X)

        int a = 0;
        while (x != 0) {
            // Check 32 bits limit first;
            if (a > INT32_MAX / 10 || a < INT32_MIN / 10) {
                return 0;
            }
            // x % 10 gets the last digit
            a = a * 10 + x % 10;
            
            // x / 10 removes the last digit
            x = x / 10;
        }
        return a;
    }
};