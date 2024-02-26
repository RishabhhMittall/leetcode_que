class Solution {
public:
    bool isSubsequence(string s, string t) {
        int size1 = s.length();
        int size2 = t.length();
        
        int i = 0  ;

        for(int j = 0; j < size2; j++) {
            while(i < size1) {
                if(s[i] == t[j]){
                    i++;
                }
                break;
            }
        }
        if(i == size1){
            return true;
        }
        return false;
    }

};