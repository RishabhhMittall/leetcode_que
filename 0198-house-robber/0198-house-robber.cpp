class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) {
            return 0;
        } 
        if (n == 1) {
            return nums[0];
        }
        int premax = 0; 
        int curmax = 0; 

        for (int i = 0; i < n; i++) {
            int temp = curmax;
            curmax = max(curmax, premax + nums[i]);
            premax = temp;
        }

        return curmax;
    }
};