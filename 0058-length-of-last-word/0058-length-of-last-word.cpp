class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int cnt=0,a=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '&& a == 1)break;
            if(s[i]!=' '){
                a=1;
                cnt++;
            }
        }
        return cnt;
    }
};