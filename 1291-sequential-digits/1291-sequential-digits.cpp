class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        for (int i = 1; i <= 9;i++){
            
            int first = i;
            int nxt = i + 1;
            while(nxt <= 9 && first <=high) {
                first = first * 10 + nxt;
                if (low <= first && first <= high) {
                    ans.push_back(first);
                }
                nxt++;
                
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};


