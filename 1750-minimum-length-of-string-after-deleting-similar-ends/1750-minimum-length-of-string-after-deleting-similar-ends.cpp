class Solution {
public:
   
    int minimumLength(string s) {
        int n = s.length();
        int str = 0, end = n - 1;

        while (str <= end) {
            if (str == end) {
                
                if (s[str] == s[str + 1] && s[end] == s[end - 1]) {
                    return 0;
                } 
                else return 1; 
                    
            }

            if (s[str] == s[end]) {
                if (s[str] == s[str + 1] && s[end] == s[end - 1]) {

                    str++;
                    end--;
                } 
                else if (s[end] == s[end - 1]) {

                    end--;
                } 
                else if (s[str] == s[str + 1]) {

                    str++;
                } 
                else {
                    str++;
                    end--;
                }
            } 
            else {
                break;
            }
        }


        int cnt = 0;
        
        for (int i = str; i <= end; i++) {
            cnt++;
        }

        return cnt;
    }
};