class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        string des;

        for(int i = 0; i<n; i++) {
            bool ans = true;
            des = paths[i][1];
            for(int j = 0; j<n; j++) {
                if(paths[j][0] == des){
                    ans = false;
                    break;
                }
            }            
            if(ans == true){
                return des;
            }
        }
        return "";
    }
};