class Solution {
public:
    string customSortString(string order, string s) {
        int n1 = order.length();
        int n2 = s.length();
        unordered_map<char, int> count;
        for (int i = 0; i<n2; i++) {
            char ch = s[i];
            count[ch]++;
        }

        string result;
        for (int i = 0; i<n1; i++) {
            char ch = order[i];
            if (count.find(ch) != count.end()) {
                result.append(count[ch], ch);
                count.erase(ch);
            }
        }

         for (auto it = count.begin(); it != count.end(); ++it) {
            result.append(it->second, it->first);
        }

        return result;
    }
};
