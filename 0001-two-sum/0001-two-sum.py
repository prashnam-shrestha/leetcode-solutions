class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        check_list = []
        result = []

        for idx,num in enumerate(nums):
            #idx gets 0
            check_list = nums.copy()
            check_list.pop(idx)
            #check_list = [3]

            for i in check_list:
                if (num+i) == target:
                    
                    result = [idx,nums.index(i)]

        return result