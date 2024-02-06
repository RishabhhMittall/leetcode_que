class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> alpha(26);
        int n = s.length();
        for (int i = 0; i < n; i++) {
            int idx = s[i] - 'a';
            alpha[idx]++;
        }
        
        for (int i = 0; i < n; i++) {
            if (alpha[s[i] - 'a'] == 1){
                return i;
            } 
        }
        
        return -1;
    }
};
