class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        // int cnt = 0;
        for(int i = 0; i<n; i++) {
           int j = i+ 1;

            if(s[i] == s[j]) {
                s.erase(i,2);
                i = -1;
            }
            // cout<<"str "<<s<<endl;
            // cnt++;
            // cout<<cnt<<endl;
        }
        return s;
    }
};