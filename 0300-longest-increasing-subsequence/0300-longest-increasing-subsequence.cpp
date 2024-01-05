class Solution {
public:

    // int solve(vector<int> nums, int n , int curr, int prev){
    //     if(curr == n) return 0;

    //     //include
    //     int take = 0;
    //     if(prev == -1 || nums[curr] > nums[prev]) take = 1 + solve(nums, n, curr +1, curr);

    //     //exclude
    //     int notTake = 0 + solve(nums, n, curr+1, prev);
    // }
    int lengthOfLIS(vector<int>& nums) {
        //---Approach 1 Binary search-----
        int arr[nums.size()];
        int size = 0;
        for(int x : nums) {
            int i = 0, j = size;
            while(i!=j){
                int m =(i+j)/2;
                if(arr[m] < x){
                    i = m+1;
                }
                else {
                    j = m;
                }
                
            }
            arr[i] = x;
                if(i == size) size++;
            
        }
        return size;
// Approach 2 --- DP----
    //    if (nums.empty()) return 0;
        
    //     int n = nums.size();
    //     vector<int> dp(n, 1); 
        
    //     int maxLen = 1;
    //     for (int i = 1; i < n; ++i) {
    //         for (int j = 0; j < i; ++j) {
    //             if (nums[i] > nums[j]) {
    //                 dp[i] = max(dp[i], dp[j] + 1);
    //                 maxLen = max(maxLen, dp[i]);
    //             }
    //         }
    //     }
    //     return maxLen;

// Approach 3 ----recurssion(TLE)----
    // int n = nums.size();
    // return solve(nums,n,0,-1);
    }
};