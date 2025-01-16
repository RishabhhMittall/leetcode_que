class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0){
            return 0;
        }
        int ans = 0;
        int arr[128] ={-1};
        int l = 0;
        for(int i = 0; i<n; i++) {
            if(arr[s[i]] >= l){
                l = arr[s[i]] + 1;
            }
            arr[s[i]] = i;
            ans = max(ans, i-l+1);
        }
        return ans;
    }
};