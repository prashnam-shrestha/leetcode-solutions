class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int current = 0;
        int size = nums.size();
    
        for (int i = 0; i < size; i++) {
            
            if (nums[i] == 1) {
                current++;
            }
            if (nums[i] == 0 || i == size - 1) {
                
                if (current > max) {
                    max = current; 
                }
                current = 0;
            }
        }
        return max;
    }
};