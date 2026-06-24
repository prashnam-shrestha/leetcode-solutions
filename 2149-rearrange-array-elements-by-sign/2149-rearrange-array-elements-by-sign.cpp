class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        int even = 0;
        int odd = 1;
        vector<int> result(size);
        for (int i = 0; i < size; i++) {
            if (nums[i] >= 0) {
                result[even] = nums[i];
                even += 2;
            }
            else {
                result[odd] = nums[i];
                odd += 2;
            }
        }
        return result;
    }
};