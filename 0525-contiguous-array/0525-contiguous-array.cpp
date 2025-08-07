class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();   
        int ans = 0, c = 0;

        unordered_map<int, int> cnt;

        cnt[0] = -1;
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 0){
                c--;
            }        
            else{

                c++;
            }

            if (cnt.find(c) != cnt.end()) {

                ans = max(ans, i - cnt[c]);
            } 
            else {
                cnt[c] = i;
                
            }
        }

        return ans;
    }
};