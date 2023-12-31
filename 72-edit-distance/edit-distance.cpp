class Solution {
public:
    int minDistance(string str1, string str2) {
        int n = str1.size(), m = str2.size();

        // if (n < m) {
        //     swap(str1, str2);
        //     swap(n, m);
        // }

        vector<int> dp(m + 1, -1);

        for (int j = 0; j <= m; j++) {
            dp[j] = j;
        }
        //we require both prev[0] and curr[0] and hence the two lines after the first loop
        for (int i = 1; i <= n; i++) {
            int prev = dp[0];
            dp[0] = i;
            for (int j = 1; j <= m; j++) {
                int temp = dp[j];
                if (str1[i - 1] == str2[j - 1]) {
                    dp[j] = prev;
                } else {
                    dp[j] = 1 + min(temp, min(dp[j - 1], prev));
                }
                prev = temp;
            }
        }

        return dp[m];
    }
};
