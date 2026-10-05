class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> freq;
        int size = nums.size();

        for (int i = 0; i < size; i++) {

            if (freq.find(target - nums[i]) != freq.end()) {
                return vector<int>{freq[target - nums[i]], i};
            }
            else {freq[nums[i]] = i;}
        }
        return vector<int>{0, 0};
    }
};