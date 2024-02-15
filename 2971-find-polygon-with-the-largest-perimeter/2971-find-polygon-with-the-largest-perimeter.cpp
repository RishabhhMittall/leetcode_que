class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        long long ans = -1;
        sort(nums.begin(),nums.end());

        int i = 0; 
        while(i < n) {
            if(nums[i] < sum){
                ans = sum + nums[i];
            }
            sum += nums[i];
            i++;
        }

        if(i > 2){
            return ans;
        }
        return -1;
    }
};