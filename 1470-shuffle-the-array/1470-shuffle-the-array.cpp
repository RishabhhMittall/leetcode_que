class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s = nums.size();
        vector<int> ans(s,0);
        int count = 0;
        for(int i = 0; i<s; i++){
           if(i % 2 == 0){
               ans[i] = nums[i/2];
           }
           else{
               ans[i] = nums[n+i/2];
           }
        }
        // for(int i = s/2; i<s; i++){
        //     ans[i - count] = nums[i];
        //     count--;
        // }
        return ans;
    }
};