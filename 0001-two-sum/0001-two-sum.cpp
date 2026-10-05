class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> output(2);

            int size = nums.size();
            bool run = true;
            for (int i = 0; i < size && run; i++) {

                for (int j = 0; j < size; j++) {

                    if (i == j) { continue; }
                    
                    if (nums[i] + nums[j] == target) {
                        output[0] = (i);
                        output[1] = (j);
                        run = false;
                        break;
                    }
                    
                }
            }
            return output;
    }
};