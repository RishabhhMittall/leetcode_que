class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int s = nums.size();
        vector<int> ans(s,0);

        for(int i = 0; i<s; i++) {
            ans[i] = nums[i] * nums[i];
        }

        sort(ans.begin(), ans.end());

        return  ans;
    }
};