class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int, int> freq;
        
        for(int i = 0; i < size; i++) {
            if(freq.contains(target - nums[i])) {
                return {i, freq[target - nums[i]]};
            }
            freq[nums[i]] = i;
        }
        return {-1,-1};        
    }
};