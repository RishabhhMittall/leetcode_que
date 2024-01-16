class Solution {
public:

    void find(vector<int> nums, vector<int> out, int idx, vector<vector<int>> &ans){
        if(idx >= nums.size()){
            ans.push_back(out);
            return;
        }
        find(nums, out, idx + 1, ans);

        int ele = nums[idx];
        out.push_back(ele);
        find(nums, out, idx+1, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> out;
        int idx = 0;

        find(nums, out, idx, ans);
        return ans;
    }
};