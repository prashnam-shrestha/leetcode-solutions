class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int leftBoundary = 0;
        int rightBoundary = size - 1;

        for (int i = 0; i < size; i++) {
            if (i > rightBoundary) {
                return;
            }
            if (nums[i] == 0) {
                swap(nums[i], nums[leftBoundary]);
                leftBoundary++;
            }
            else if (nums[i] == 2) {
                swap(nums[i], nums[rightBoundary]);
                rightBoundary --;
                i--;
                
            }
        }
    }
};