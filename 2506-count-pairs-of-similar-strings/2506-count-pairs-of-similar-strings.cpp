class Solution {
public:
    int similarPairs(vector<string>& words) {
        unordered_map<string, int> freq;
        int ans = 0;

        for (string &word : words) {
            // collect unique chars
            vector<int> seen(26, 0);
            for (char c : word) {
                seen[c - 'a'] = 1;
            }

            // build signature string
            string sig = "";
            for (int i = 0; i < 26; i++) {
                if (seen[i]) sig.push_back('a' + i);
            }

            ans += freq[sig];  // count how many same signatures appeared before
            freq[sig]++;
        }

        return ans;
    }
};


// class Solution {
// public:
//     int similarPairs(vector<string>& words) {
//         vector<set<char>> st;

//         for(int i = 0; i < words.size(); i++) {
//             string curr = words[i];
//             set<char>temp;
//             for(int j = 0; j<curr.length(); j++) {
//                 temp.insert(curr[j]);
//             }
//             st.push_back(temp);
//             temp.clear();
//         }

//         int ans = 0;
//         int n = st.size();
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (st[i] == st[j]) {
//                     ans++;
//                 }
//             }
//         }
//         return ans;
//     }
// };