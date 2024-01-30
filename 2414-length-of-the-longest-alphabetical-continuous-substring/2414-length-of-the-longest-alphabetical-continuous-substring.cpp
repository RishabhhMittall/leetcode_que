class Solution {
public:
    int longestContinuousSubstring(string s) {
        int ans = 1;
        int maxi = -1;
        int n = s.length();

        for(int i = 0; i<n-1; i++){
            if(s[i+1] - s[i] == 1 ){
                ans ++;
            }
            else{
                maxi = max(ans,maxi);
                ans = 1;
            }
        }
        return max (maxi,ans);
    }
};