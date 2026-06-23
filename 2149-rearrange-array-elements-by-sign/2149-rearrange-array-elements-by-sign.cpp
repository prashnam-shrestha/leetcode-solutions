class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> negativeStock;
        queue<int> positiveStock;

        int size = nums.size();

        for (int i = 0; i < size; i++) {
            if (nums[i] >= 0) {
                positiveStock.push(nums[i]);
            }
            else {
                negativeStock.push(nums[i]);
            }
        }
        for (int i = 0; i < size; i++) {
            if (i % 2 == 0) {
                nums[i] = positiveStock.front();
                positiveStock.pop();
            }
            else {
                nums[i] = negativeStock.front();
                negativeStock.pop();
            }
        }
        return nums;
    }
};