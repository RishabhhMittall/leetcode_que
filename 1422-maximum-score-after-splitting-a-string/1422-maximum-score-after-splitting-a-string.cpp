class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int z = 0, o = 0;
        
        for(int i = 0; i<n; i++) {
            if(s[i] == '1'){
                o ++;
            }
        }
        int ans  = 0;
        for(int i = 0; i<n-1; i++){
            if(s[i] == '1'){
                o--;
            }
            else{
                z++;
            }
            ans =max(ans, z+o);
        }
        return ans;
    }
};