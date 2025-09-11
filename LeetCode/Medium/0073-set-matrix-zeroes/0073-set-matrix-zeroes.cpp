class Solution {
public:
    void solve(int r, int c, vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        for (int i = 0; i < cols; i++) {
            matrix[r][i] = 0;
        }
        for (int i = 0; i < rows; i++) {
            matrix[i][c] = 0;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> track;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0) {
                    track.push_back({i, j});
                }
            }
        }
        for (int i = 0; i < track.size(); i++) {
            solve(track[i][0], track[i][1], matrix);
        }
    }
};