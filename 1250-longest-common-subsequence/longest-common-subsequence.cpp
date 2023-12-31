class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int l1 = text1.length(), l2 = text2.length();
        vector<int> prev(l2 + 1, 0);
        int maxLength = 0, endIndex = 0;
        for(int i = 1; i <= l1; i++)
        {
            // vector<int> curr(l2 + 1, 0);
            int last = 0;
            for(int j = 1; j <= l2; j++)
            {
                int temp = prev[j];
                if(text1[i - 1] == text2[j - 1])
                {
                    prev[j] = 1 + last;
                }
                else
                {
                   prev[j] = max(prev[j - 1], prev[j]);
                }

                last = temp;
            }
            // prev = curr;
        }
        // return solve(l1 - 1, l2 - 1, text1, text2, dp);
        return prev[l2];
    }
};