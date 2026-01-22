class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        nums_1 = []
        nums_2 = []

        for i in range(m):
            nums_1.append(nums1[i])
        
        for j in range(n):
            nums_2.append(nums2[j])

        for k in nums_2:
            nums_1.append(k)

        nums1[:] = sorted(nums_1)
        



