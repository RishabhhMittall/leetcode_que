class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int row = bank.size();
        int ans = 0;
        vector<int> result(row,0);
        for(int i = 0; i<row; i++) {
            int cnt = 0;

            for(char c: bank[i]){
                if(c == '1'){
                    cnt ++;
                }
            }
            result[i] = cnt;
            
        }

        int val1 = 0;

        for(int i = 0; i<row; i++){
            // int val2 = result[i+1];
            if(result[i]!=0){
                ans += val1 * result[i];
                val1 = result[i];
            }
        }
        
        return ans;
    }
};