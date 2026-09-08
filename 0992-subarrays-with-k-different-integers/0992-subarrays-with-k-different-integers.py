class Solution:
    def subarraysWithKDistinct(self, nums: List[int], k: int) -> int:
        return self.atmost(nums, k) - self.atmost(nums, k - 1)

    def atmost(self,nums,k):
        mp = {}
        left = 0
        count = 0
        for r in range(len(nums)):
            mp[nums[r]] = mp.get(nums[r], 0) + 1
            while len(mp) > k:
                mp[nums[left]]-=1
                if mp[nums[left]] == 0:
                    del mp[nums[left]]
                left += 1
            count += r - left + 1
        return count
