class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        
        int maxA = -1;
        int l, b;
        int maxD = -1;
        int dia;
        for(int i=0; i<d.size(); i++){
            l = d[i][0]; b = d[i][1];
            dia = l*l + b*b;
            if(dia > maxD){
                maxD = dia;
                maxA = l*b;
            }
            else if(dia == maxD)  {
                if(maxA < l*b)
                    maxA = l*b;           
            }
        }
        
        return maxA;
    }
};