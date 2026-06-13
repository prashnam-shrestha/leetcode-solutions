class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int i = 0;
        int j = 1;

        while (j < size) {
            if (nums[i] != 0) {
                i++;
            }
            else if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i ++;
            }
            j++; 
        } 
    }
};