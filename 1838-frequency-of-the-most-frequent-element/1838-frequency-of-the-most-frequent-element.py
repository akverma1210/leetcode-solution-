class Solution:
    def maxFrequency(self, nums: list[int], k: int) -> int:
        nums.sort()

        left = 0
        total = 0
        maxFrequency = 1

        for right in range(len(nums)):
            total += nums[right]

            while nums[right] * (right - left + 1) > total + k:
                total -= nums[left]
                left += 1

            maxFrequency = max(maxFrequency, right - left + 1)

        return maxFrequency

        