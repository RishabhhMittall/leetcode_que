class Solution {
public:

    char tolower(char ch) {
        if(ch >= 'A' && ch <= 'Z') {
            return (ch - 'A' + 'a');
        }
        return ch;
    }

    bool isalphanumeric(char ch){
        if((ch >= '0' && ch <= '9') || ch >= 'a' && ch <= 'z'){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i<j){
            char left = tolower(s[i]);
            char right = tolower(s[j]);

            if(!isalphanumeric(left)){
                i++;
            }
            else if(!isalphanumeric(right)){
                j--;
            }
            else if(left != right){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};