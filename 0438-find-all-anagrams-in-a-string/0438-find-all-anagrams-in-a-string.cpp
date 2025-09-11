class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> pc (26,0);
        vector<int> sc (26,0);

        for(auto ch: p) {
            pc[ch-'a']++;
        }
        vector<int> ans;

        int n = p.length();
        for(int i = 0; i<s.length(); i++) {
            sc[s[i] -'a']++;

            if(i >= n) {
                sc[s[i-n] - 'a']--;
            }

            if(sc == pc) {
                ans.push_back(i - n + 1);
            }
        }
        return ans;
    }
};