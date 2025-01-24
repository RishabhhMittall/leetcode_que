class Solution {
public:
    string removeDuplicates(string s) {
        
        for(int i = 0; i<s.length(); i++) {
           int j = i+ 1;

            if(s[i] == s[j]) {
                s.erase(i,2);
                i = -1;
            }
        }
        return s;
    }
};