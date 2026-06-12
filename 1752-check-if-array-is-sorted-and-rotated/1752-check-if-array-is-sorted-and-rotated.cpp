class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();
        if (size <= 1) {
            return true;
        }
        bool sorted = true;
        int index;
        for (int i = 0; i < (size-1); i++) {
            if (nums[i] > nums[i+1]) {
                sorted = false;
                index = i+1;
                break;
            }
        }
        if (sorted) {
            return true;
        }
        int rotatedBy = (size) - index;
        rotate(nums.begin(), nums.begin() + (size - rotatedBy), nums.end());

        for (int i = 0; i < (size-1); i++) {
            if (nums[i] > nums[i+1]) {  
                return false;
            }
        }
        return true;
    }
};