class Solution {
public:
    int solve(int i1, int i2, string &s1, string &s2, vector<vector<int>> &dp)
    {
        if(i1 < 0 || i2 < 0)
            return 0;
        
        if(dp[i1][i2] != -1)
            return dp[i1][i2];
        
        if(s1[i1] == s2[i2])
            return dp[i1][i2] = 1 + solve(i1 - 1, i2 - 1, s1, s2, dp);
        else
            return dp[i1][i2] = max(solve(i1 - 1, i2, s1, s2, dp), solve(i1, i2 - 1, s1, s2, dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int l1 = text1.length(), l2 = text2.length();
        vector<vector<int>> dp(l1, vector<int>(l2, -1));
        return solve(l1 - 1, l2 - 1, text1, text2, dp);
    }
};