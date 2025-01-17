class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0; i<nums.size(); i++) {
            if(i == 0 ||(i>0 && (nums[i] != nums[i-1]))) {

                int j = i+1;
                int k = nums.size() - 1;

                int sum = nums[i] + nums[k] + nums[j];

                while(j<k) {
                    if(sum > 0) {
                        k--;
                    }
                    else if( sum < 0) {
                        j++;
                    }
                    else {
                        ans.push_back({nums[i], nums[j], nums[k]});
                        while(j<k && nums[j] == nums[j+1]) j++;
                        while(j<k && nums[k] == nums[k-1]) k--;
                        j++;
                        k--;

                    }
                }    
            }
        }
        return ans;
    }
};