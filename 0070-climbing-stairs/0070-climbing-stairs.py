class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 1 or n == 2:
            return n

        # dp = defaultdict(int)
        dp = {i : 1 for i in range(n + 1)}

        # def climbWays(numStairs):
        #     if numStairs == 1 or numStairs == 2:
        #         return numStairs
        #     if dp[numStairs] != -1:
        #         return dp[numStairs]

        #     oneStep = climbWays(numStairs - 1)
        #     twoSteps = climbWays(numStairs - 2)

        #     dp[numStairs] = oneStep + twoSteps

        #     return dp[numStairs]
        
        dp[0] = 1
        dp[1] = 1

        for i in range(2, n + 1):
            dp[i] = dp[i - 1] + dp[i - 2]

        return dp[n]