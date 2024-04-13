class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> vecS(200, 0); 
        vector<int> vecT(200, 0); 
        

        int len = s.length(); 
        

        for(int i = 0; i < len;i++){ 

            if(vecS[s[i]] != vecT[t [i] ]){

                return false;

            }
            vecS[s[i]] = i + 1; 
            vecT[t[i]] = i + 1;
        }
        
        return true; 
    }
};