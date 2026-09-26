class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        d = {}
        m = 0
        for n in nums:
            if n in d:
                d[n] += 1
            else:
                d[n] = 1

            if d[n] > m:
                m = d[n]
        
        ret = 0
        for x in d:
            if d[x] == m:
                ret += d[x]
        
        return ret
