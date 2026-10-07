class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> output;
        int size = nums.size();
        if (size < 3) {
            return {};
        }

        sort(nums.begin(), nums.end());
        int prevI = nums[size - 1] + 1;
        int prevLow;
        int prevHigh;

        for (int i = 0; i < size; i++) {

            prevLow = nums[size - 1] + 1; 
            prevHigh = nums[size - 1] + 1;

            int fixed = nums[i];
            if (fixed == prevI) {
                continue;
            }
            prevI = nums[i];

            int low = i + 1;
            int high = size - 1;
            while (low < high) {

                int sum =  nums[low] + nums[high] + fixed;

                if (nums[low] == prevLow) {
                    low++;
                    continue;
                }
                if (nums[high] == prevHigh) {
                    high--;
                    continue;
                }

                if (sum == 0) {
                    output.push_back({fixed, nums[low], nums[high]});
                    prevLow = nums[low];
                    prevHigh = nums[high];
                    low++;
                    high--;
                }
                else if (sum < 0) { low++; }
                else { high--; }
            }
        }

        return output;
    }
};