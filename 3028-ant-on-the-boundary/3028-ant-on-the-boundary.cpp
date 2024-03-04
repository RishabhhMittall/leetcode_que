class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ans = 0;
        int count = 0;

        for(int i = 0; i<nums.size(); i++) {
            if( nums[i] > 0) {
                ans += nums[i];
                if(ans == 0) {
                    count ++;
                }
            }
            else {
                ans -= abs (nums[i]);
                if(ans == 0) {
                    count ++;
                }
            }
        }
        return count;
    }
};