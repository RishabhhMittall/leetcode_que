class Solution {
public:

    void solve(string digit, string result, int idx, vector<string> & ans, string mapping[]) {
        
        if(idx >= digit.length()) {
            if(result.length() > 0){
                ans.push_back(result);
            } 
            return;
        }
        int number = digit[idx] - '0';   //digit[idx] is char so subtract ASCII of 0 to obtain int
        string value = mapping[number];

        for(int i = 0; i<value.length(); i++) {
            result.push_back(value[i]);
            solve(digit, result, idx+1, ans, mapping);
            result.pop_back();
        }

    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string result = "";
        // int n = digits.length();
        int idx = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, result, idx, ans, mapping);
        return ans;
    }   
};