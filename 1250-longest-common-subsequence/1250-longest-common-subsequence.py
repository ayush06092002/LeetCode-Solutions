class Solution(object):
    def longestCommonSubsequence(self, text1, text2):
        """
        :type text1: str
        :type text2: str
        :rtype: int
        """
        n = len(text1)
        m = len(text2)
        # dp = {}
        # def findCommon(i, j):
        #     if i == 0 or j == 0:
        #         return 0
        #     if (i, j) in dp:
        #         return dp[(i, j)]

        #     take = 0
        #     if text1[i - 1] == text2[j - 1]:
        #         take = 1 + findCommon(i - 1, j - 1)
            
        #     not_take = max(findCommon(i - 1, j), findCommon(i, j - 1))

        #     dp[(i, j)] = max(take, not_take)
        #     return dp[(i, j)]
        
        dp = [[0] * (m + 1) for _ in range(n + 1)]

        for i in range(1, n + 1):
            for j in range(1, m + 1):
                take = 0
                if text1[i - 1] == text2[j - 1]:
                    dp[i][j] = 1 + dp[i - 1][j - 1]
                else: 
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])
        
        return dp[n][m]
