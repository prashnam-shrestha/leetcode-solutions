class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int largestSum = INT_MIN;
        int currentSum = 0;
        int size = nums.size();

        for (int i = 0; i < size; i++) {
            currentSum += nums[i];

            if (currentSum > largestSum) {
                largestSum = currentSum;
            }

            if (currentSum <= 0) {
                currentSum = 0;
            }
        }
        return largestSum;
    }
};