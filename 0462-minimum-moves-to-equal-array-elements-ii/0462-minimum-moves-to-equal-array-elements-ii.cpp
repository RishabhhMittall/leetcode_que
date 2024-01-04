class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(),nums.end());
        // int mid = n/2;
        for(int i = 0; i<n; i++){
            
            ans += abs(nums[i] - nums[n/2]);
        }
        return ans;
    }
};