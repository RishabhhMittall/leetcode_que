class Solution {
public:
    int similarPairs(vector<string>& words) {
        vector<set<char>> st;

        for(int i = 0; i < words.size(); i++) {
            string curr = words[i];
            set<char>temp;
            for(int j = 0; j<curr.length(); j++) {
                temp.insert(curr[j]);
            }
            st.push_back(temp);
            temp.clear();
        }

        int ans = 0;
        int n = st.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (st[i] == st[j]) {
                    ans++;
                }
            }
        }
        return ans;
    }
};