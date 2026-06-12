class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> v1;
        for (auto i: nums) {
            v1.insert(i);
        }
        nums.clear();
        for (auto i: v1) {
            nums.push_back(i);
        }
        return nums.size();
    }
};