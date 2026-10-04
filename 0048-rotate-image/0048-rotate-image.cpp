class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Transpose --> Reverse
        int rowSize = matrix.size();
        int columnSize = matrix[0].size();
        // Transpose

        for (int i = 0; i < columnSize; i++) {

            for (int k = i; k < columnSize; k++) {
                swap(matrix[k][i], matrix[i][k]);  
            }
        }

        for (int i = 0; i < rowSize; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};