class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        int maxi = *max_element(nums.begin(), nums.end());
        
        vector<int> count(maxi+1,0);

        for(int i = 0; i<n; i++) {
            int idx = nums[i];
            count[idx]++;
        }

        int maxFreq = *max_element(count.begin(), count.end());
        
        int ans = 0;
        for (int i = 0; i <= maxi; i++) {
            if (count[i] == maxFreq) {
                ans += count[i];
            }
        }
        return ans;
    }
};