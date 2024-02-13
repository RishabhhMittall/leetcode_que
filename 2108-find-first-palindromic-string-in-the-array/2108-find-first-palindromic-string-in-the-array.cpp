class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        // string ans;

        for(int i = 0; i<n; i++) {
            string st = words[i];
            int s = st.length();
            int x = 0;
            int y = s - 1;
            bool flag = 1;
            while(x<=y) {
                if(st[x] == st[y]){
                    x++;
                    y--;
                }
                else{
                     flag = 0;
                    break;
                }
            }
            if(flag) {
                return st;
                break;
            }
            
        }
        return "";
    }
};