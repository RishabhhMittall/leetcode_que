class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> rowMin(row, INT_MAX);
        vector<int> colMax (col, INT_MIN);

        for(int i = 0; i<row; i++) {
            for(int j = 0; j<col; j++) {
                rowMin[i] = min(rowMin[i] , matrix[i][j]);
                colMax[j] = max(colMax[j] , matrix[i][j]);
            }
        }

        for(int i = 0; i<row; i++) {
            for(int j = 0; j<col; j++) {
                if(matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j]) {
                    return {matrix[i][j]};
                }
            }
        }
        return {};
    }
};