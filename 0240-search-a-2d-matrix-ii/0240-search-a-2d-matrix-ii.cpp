class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIdx = 0, colIdx = col - 1;

        while(rowIdx < row && colIdx >= 0) {
            int ele = matrix[rowIdx][colIdx];

            if(ele == target) return true;
            else if(ele < target) rowIdx ++;
            else colIdx--;
        }
        return false;
    }
};