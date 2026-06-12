class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int left = 0;
        for (int i = 0; i < (size-1); i++) {
            if (nums[left] < nums[i+1]) {
                swap(nums[left + 1], nums[i+1]);
                left++;
            }
        }
        return left + 1;
    }
};