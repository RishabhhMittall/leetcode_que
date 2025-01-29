class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        if(n == 2) {
            reverse(nums.begin(), nums.end());

        }
        else {
            reverse(nums.begin(), nums.begin() + n/2);
            reverse(nums.begin() + n/2, nums.end());

        }

        
        return nums;
    }
};