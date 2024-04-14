class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int op = 0, cl = 0;
        string result;
        
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch != '(' && ch != ')') {
                result += ch;
            } else if (ch == '(') {
                op++;
                result += ch;
            } else if (op > 0) {
                result += ch;
                op--;
            }
        }

        if (op > 0) {
            int n = result.length();
            s = result;
            result = "";
            op = 0, cl = 0;
            
            for (int i = n - 1; i >= 0; i--) {
                char ch = s[i];
                if (ch != '(' && ch != ')') {
                    result += ch;
                } 
                else if ( ch == ')' ) {
                    cl++;
                    result += ch;
                } 
                else if ( cl> 0) {
                    result += ch;
                    cl--;

                }
            }
        } 
        else{
            return result;
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};
