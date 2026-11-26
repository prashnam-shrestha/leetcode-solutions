class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = INT_MIN;

        int sum = 0;

        int size = nums.size();

        for (int i = 0; i < size; i++)  {
            sum += nums[i];
            if (sum > result) {
                result = sum;
            }
            if (sum < 0) {
                sum = 0;
            }
        }

        return result;
    }
};