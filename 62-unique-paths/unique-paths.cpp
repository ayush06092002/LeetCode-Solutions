class Solution
{
    public:
        int solve(int i, int j, vector<vector < int>> &dp)
        {
            if (dp[i][j] != -1)
                return dp[i][j];

            if (i == 0 || j == 0)
                return 1;

            if (i < 0 || j < 0)
                return 0;

            return dp[i][j] = solve(i - 1, j, dp) + solve(i, j - 1, dp);
        }
    int uniquePaths(int m, int n)
    {
        vector<vector < int>> dp(m, vector<int> (n, -1));
        return solve(m - 1, n - 1, dp);
    }
};