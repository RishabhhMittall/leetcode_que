class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n+1,0);
        vector<int> final;
        for(int i = 0; i< n; i++) {
            int idx = nums[i];
            res[idx] ++;
        }

        for(int i = 0; i < res.size(); i++) {
            if(res[i] == 2) {
                final.push_back(i);
            }
        }
        return final;
    }
};