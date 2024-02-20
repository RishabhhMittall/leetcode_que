class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sum  = 0;
        int res = 0;
        for(int i = 0; i<n ;i++) {
            sum += nums[i];
            res += i;
        }
        res += nums.length;
        return res - sum;

        
    }
}