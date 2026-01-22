class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        nums_1 = []

        for i in range(m):
            nums_1.append(nums1[i])
        
        for j in range(n):
            nums_1.append(nums2[j])

        nums1[:] = sorted(nums_1)
        



