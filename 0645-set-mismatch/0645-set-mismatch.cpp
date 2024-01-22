class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        
        // Sort the vector to simplify the search for duplicated numbers
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                ans.push_back(nums[i]);  // Duplicated number
            }
        }
        
        for (int i = 1; i <= n; i++) {
            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                ans.push_back(i);  // Missing number
                break;
            }
        }
        
        return ans;
    }
};
