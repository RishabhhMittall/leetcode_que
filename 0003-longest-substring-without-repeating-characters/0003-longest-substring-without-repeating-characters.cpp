class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.length();
        int maxLen = 0;

        for(int i = 0; i<n; i++){
            int arr[256] = {0};
            for(int j = i; j<n; j++) {
                
                if(arr[s[j]] == 1) break;
                int len = j - i + 1;
                maxLen = max(maxLen , len);
                arr[s[j]] = 1;
            }
        }
        return maxLen;
    }
};