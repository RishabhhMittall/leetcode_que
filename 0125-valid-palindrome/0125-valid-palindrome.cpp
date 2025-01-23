class Solution {
public:

    char toLower(char ch) {
        if(ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    bool isAlpha (char ch) {
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <='9')) {
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {

        int i = 0;
        int j= s.size() -1;


        while( i<j ) {
            char left = toLower(s[i]);
            char right = toLower(s[j]);

            if(!isAlpha(left)) {
                i++;
            }
            else if(!isAlpha(right)) {
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