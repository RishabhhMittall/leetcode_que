class Solution {
public:

    char toLower(char ch) {
        if(ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    bool isAlphaNumeric(char ch) {
        if(ch >= '0' && ch <= '9' || ch >= 'a' && ch <= 'z') {
            return true;
        }
            return false;
    }


    bool isPalindrome(string s) {
        int n = s.length();

        int i = 0;
        int j = n - 1;
        
        while(i<j) {
            char left = toLower(s[i]);
            char right = toLower(s[j]);

            if( isAlphaNumeric(left) != true) {
                i++;
            }
            else if( isAlphaNumeric(right) != true) {
                j--;
            }
            else if(left != right) {
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