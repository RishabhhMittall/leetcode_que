class Solution {
public:
    int minOperations(vector<int>& nums) {
        //int maxi = INT_MAX;
        int maxi = *max_element(nums.begin(),nums.end());
        vector<int>count (maxi+1,0);

        int n = nums.size();

        for(int i = 0; i<n; i++){
            int idx = nums[i];
            count[idx]++;

        }
        
        int ans = 0;
        for(int i = 0; i<count.size();i++){
            if(count[i] == 1){
                return -1;
            }
            while(count[i] != 0){
                if(count[i] <= 3){
                    count[i] = 0;
                    ans ++;
                }
                else if(count[i] > 3){
                    count[i] -= 3;
                    ans++;
                }
            }
            
        }
        return ans;
        
    }
};