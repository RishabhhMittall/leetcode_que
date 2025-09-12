class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 1, left = 0, cnt = 0;
        if(k <= 1) return 0;

        for(int i = 0; i<n; i++) {
            ans *= nums[i];

            while(ans >= k) {
                ans /= nums[left];
                left++;
            }
            cnt += i - left + 1;
        }
        return cnt;
    }
};