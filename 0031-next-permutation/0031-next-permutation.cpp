class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
            for (int i = size - 1; i > 0; i--) {

                if (nums[i] > nums[i - 1]) {
                    for (int j = size - 1; j > (i - 1); j--) {

                        if (nums[j] > nums[i-1]) {
                            swap(nums[j], nums[i-1]);
                        
                            reverse(nums.begin() + i, nums.end());
                            return;
                        }
                    }
                }
            }
        reverse(nums.begin(), nums.end());
    }
};