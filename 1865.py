class FindSumPairs(object):
    def __init__(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        """
        self.nums1 = nums1
        self.nums2 = nums2
        self.count2 = collections.Counter(nums2)
        
    def add(self, index, val):
        """
        :type index: int
        :type val: int
        :rtype: None
        """
        self.count2[self.nums2[index]] -= 1
        self.nums2[index] += val
        self.count2[self.nums2[index]] += 1
        
    def count(self, tot):
        """
        :type tot: int
        :rtype: int
        """
        res = 0
        for num in self.nums1:
            res += self.count2[tot - num]
        return res

# Your FindSumPairs object will be instantiated and called as such:
# obj = FindSumPairs(nums1, nums2)
# obj.add(index,val)
# param_2 = obj.count(tot)