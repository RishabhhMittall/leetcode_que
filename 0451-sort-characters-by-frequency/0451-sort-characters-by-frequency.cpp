class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;

        for(int i = 0; i<s.length(); i++) {
            mp[s[i]]++;
        }

        vector<pair<char, int>> arr(mp.begin(), mp.end());

        sort(arr.begin(), arr.end(), [](auto & a, auto &b) {
            return a.second > b.second;
        });



        string ans = "";
        for (auto &a : arr) {
            ans += (string(a.second, a.first));
        }

        // reverse(ans.begin(), ans.end());

        return ans;
    }
};