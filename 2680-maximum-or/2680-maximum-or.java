class Solution {
    public long maximumOr(int[] nums, int k) {
        if(nums.length == 1) {
            return (long)nums[0] << k;
        }

        long[] prefix = new long[nums.length];
        prefix[0] = nums[0];

        for(int i = 1; i < nums.length; i++) {
            prefix[i] = prefix[i-1] | (long)nums[i];
        }

        long[] suffix = new long[nums.length];
        suffix[nums.length - 1] = nums[nums.length - 1];

        for(int i = nums.length - 2; i >= 0; i--) {
            suffix[i] = suffix[i+1] | (long)nums[i];
        }

        long ans = Math.max(((long)nums[0] << k) | suffix[1], ((long)nums[nums.length - 1] << k) | prefix[nums.length - 2]);

        for(int i = 1; i < nums.length - 1; i++) {
            long n = ((long)nums[i] << k) | prefix[i-1] | suffix[i+1];
            ans = Math.max(ans, n);
        }
        return ans;
    }
}