class Solution {
public:
    bool isAnagram(string s, string t) {
      
        int arr[26] ={0};
        // int arr2[26] = {0};

        for(int i = 0; i<s.size();i++) {
            char ch = s[i];
            int index = ch - 'a';
            arr [index] ++;
        }

        for(int i = 0 ; i<t.size();i++) {
            char ch = t[i];
            int index = ch - 'a';
            arr [index] --;
        }

        for(int  i = 0; i<26; i++) {
            if(arr[i] == 0){
                continue;
            }
            else{
                return false;
            }
        }
    return true;
    }
};