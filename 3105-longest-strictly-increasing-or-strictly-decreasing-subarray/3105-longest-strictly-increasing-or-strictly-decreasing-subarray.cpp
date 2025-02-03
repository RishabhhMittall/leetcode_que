class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int maxLen = 1;
        int incCnt = 1, decCnt = 1;

        for(int i = 1; i < n; i++) {
            if(nums[i] > nums[i - 1]) {
                incCnt++;
                decCnt = 1;
            } 
            else if (nums[i] < nums[i - 1]) {
                decCnt++;
                incCnt = 1;
            } 
            else {
                incCnt = 1;
                decCnt = 1;
            }

            maxLen = max(maxLen, max(incCnt, decCnt));
        }

        return maxLen;
    }
};
