class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<vector<int>> output;
        sort(nums.begin(), nums.end());

        if (size < 4) {
            return {};
        }

        int prevI = nums[size - 1] + 1;

        for (int i = 0; i < size; i++) {
            if (nums[i] == prevI) { // Skip duplicates
                continue;
            }

            int prevJ = nums[size - 1] + 1;

            for (int j = i + 1; j < size; j++) {

                if (nums[j] == prevJ) { // Skip duplicates
                    continue;
                }

                int k = j + 1;
                int l = size - 1;
                int prevK = nums[size - 1] + 1;
                int prevL = nums[size - 1] + 1;

                while (k < l) {

                    if (nums[k] == prevK) { // Skip duplicates
                        k++;
                        continue;
                    }

                    if (nums[l] == prevL) { // Skip duplicates
                        l--;
                        continue;
                    }

                    int64_t sum = (int64_t) nums[j] + (int64_t) nums[k] + 
                                (int64_t) nums[i] + (int64_t) nums[l];

                    if (sum == target) {
                        output.push_back({nums[i], nums[j], nums[k], nums[l]});
                        prevK = nums[k];
                        prevL = nums[l];
                        k++;
                        l--;
                        continue;
                    }

                    if (sum > target) {
                        l--;
                    }
                    else {
                        k++;
                    }
                }

                prevJ = nums[j];
            }

            prevI = nums[i];
        }

        return output;
    }
};