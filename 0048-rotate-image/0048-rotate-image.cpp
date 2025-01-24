class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();
        
        for(int i = 0; i<n-1; i++) {   // till the second last as we are only traversing upper half/ right half
            for(int j = i+1; j<n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i = 0; i<n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};