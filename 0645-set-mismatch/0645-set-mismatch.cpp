class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        // for (int i = 0; i < n - 1; i++) {
        //     if (nums[i] == nums[i + 1]) {
        //         ans.push_back(nums[i]);  // Duplicated number
        //     }
        // }
        
        // for (int i = 1; i <= n; i++) {
        //     if (find(nums.begin(), nums.end(), i) == nums.end()) {
        //         ans.push_back(i);  // Missing number
        //         break;
        //     }
        // }
        for(int i = 0; i<n; i++){
            if(nums[i] != i + 1){
                ans.push_back(nums[i]);
                ans.push_back(i + 1);
            }
        }
        
        return ans;
    }
};
