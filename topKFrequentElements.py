# Vitoria Marca Santa Lucia
# https://leetcode.com/problems/top-k-frequent-elements/

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:

        frequency_map = {}

        for num in nums:
            frequency_map[num] = frequency_map.get(num, 0) + 1

        buckets = [[] for _ in range (len(nums) + 1)]

        for num,freq in frequency_map.items():
            buckets[freq].append(num)

        result = []

        for freq in range (len(nums), 0 , -1):
            for num in buckets[freq]:
                result.append(num)
                if (len(result) == k):
                    return result

        return result