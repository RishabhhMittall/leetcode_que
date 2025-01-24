class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowidx = 0, colidx = col-1;

        while(rowidx<row && colidx >= 0){
            int mid = matrix[rowidx][colidx];

            if(mid == target){
                return true;
            }
            if(mid < target){
                rowidx ++;
            }
            if(mid > target){
                colidx --;
            }
        }
        return false;
    }
};