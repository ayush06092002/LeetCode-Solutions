class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>> result;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && arr[i] == arr[i - 1])
                continue;
            int j = i + 1;
            int k = n - 1;
            while(j < k)
            {
                int sum = arr[i];
                sum += arr[j] + arr[k];
                if(sum == 0)
                {
                    // vector<int> temp = ;
                    result.push_back({arr[i], arr[j], arr[k]});

                    while(j < k && arr[j] == arr[j + 1])
                        j++;
                    while(j < k && arr[k] == arr[k - 1])
                        k--;
                    
                    j++;
                    k--;
                }
                else if(sum < 0)
                    j++;
                else
                    k--;
            }
        }

        return result;
    }
};