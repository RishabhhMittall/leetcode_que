class Solution {
public:

    char toLower (char ch) {
        if(ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    bool alphaNumeric (char ch) {
        if( ch >= '0' && ch <= '9' || ch >= 'a' && ch <= 'z') {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int i  = 0;
        int j = s.length() -1;

        while(i<j) {
            char l = toLower(s[i]);
            char r = toLower(s[j]);

            if( !alphaNumeric(l)) {
                i++;
            }
            else if(!alphaNumeric(r)) {
                j--;
            }

            else if(l != r) {
                return false;
        
            }
            else {
                i++;
                j--;
            }
        }
        return true;
    }
};