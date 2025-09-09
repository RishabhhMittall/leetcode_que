class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();

        for(int i = 0; i<n; i++) {
            if(nums[i] % 2 == 0) {
                mp[nums[i]]++;
            }
        }

        int ans = -1;
        int value = -1;

        for(auto [f,s]: mp) {
            if(value < s) {
                value = s;
                ans = f;
            }
        }

        return ans;
    }
};