class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for(int i = 2 * n - 1; i >= 0; i--)
        {
            while(!st.empty() && nums[i % n] >= nums[st.top()])
            {
                st.pop();
            }

            if(i < n)
            {
                if(!st.empty())
                    ans[i] = nums[st.top()];
            }
            st.push(i % n);
        }
        return ans;
    }
};