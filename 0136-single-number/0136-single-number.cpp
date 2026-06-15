class Solution {
public:

    int singleNumber(vector<int>& nums) {
        // TC: O(n)
        // SC : O(1);

        int xOR = 0;
        for (auto i: nums) {
            xOR = xOR ^ i;
        }
        return xOR;
    }
};