class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";

        int s1 = word1.length() , s2 = word2.length();
        int i = 0, j = 0;
        while(i < s1 || j < s2) {
            if(i < s1){
                
                str += word1[i];
                i++;

            }
            if( j < s2){
                str += word2[j];
                j++;

            }
        }
        return str;
    }
};