class Solution:
def solve(self, nums):
   sort_seq = sorted(nums)
   table = {}

   for i, n in enumerate(nums):
      table[n] = i
   swaps = 0
   for i in range(len(nums)):
      n = nums[i]
      s_n = sort_seq[i]
      s_i = table[s_n]

      if s_n != n:
         swaps += 1
         nums[s_i] = n
         nums[i] = s_n
         table[n] = s_i
         table[s_n] = i

      return swaps

ob = Solution()
nums = [3, 1, 7, 5]
print(ob.solve(nums))