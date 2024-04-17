class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        vector<int> inp(n+1,0);
        vector<int> oup(n+1,0);
        for(int i=0;i<trust.size();i++) {
            oup[trust[i][0]]++;
            inp[trust[i][1]]++;
        }

        for(int i=1;i<=n;i++){
            if(inp[i]==n-1 && oup[i]==0)
                return i;
        }

        return -1;
    }

};